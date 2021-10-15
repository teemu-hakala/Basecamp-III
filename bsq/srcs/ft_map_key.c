/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:03:01 by thakala           #+#    #+#             */
/*   Updated: 2021/09/08 19:54:50 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char		*ft_change_key_size(char *key, int key_len)
{
	char	*swapper;
	int		i;

	i = 0;
	if (!(swapper = (char*)malloc(sizeof(*swapper) * key_len)))
		return (0);
	while (key[i] && i < key_len)
	{
		swapper[i] = key[i];
		i++;
	}
	free(key);
	return (swapper);
}

int			ft_read_map_key_logic(int *bytes_read, int *observed_bytes,
	int *key_len, char *key)
{
	if (*bytes_read == 0)
		return (-1);
	*observed_bytes += *bytes_read;
	if (key[*observed_bytes - *bytes_read] == NEWLINE)
		return (-1);
	if (*observed_bytes == (*key_len - 2))
	{
		key[*key_len - 1] = '\0';
		if (!(key = ft_change_key_size(key, *key_len += 10)))
			return (ft_malloc_error());
	}
	return (1);
}

int			ft_read_map_key(int *key_len, int observed_bytes, char **key_str,
	int *fd)
{
	char	*key;
	int		bytes_read;
	int		val;

	*key_str = 0;
	if (!(key = (char*)malloc(sizeof(*key) * *key_len)))
		return (ft_malloc_error());
	while (1)
	{
		if ((bytes_read = read(*fd, &key[observed_bytes], 1)) == -1)
			return (ft_read_error());
		val = ft_read_map_key_logic(&bytes_read, &observed_bytes, key_len, key);
		if (val == 0)
			return (0);
		else if (val == -1)
			break ;
	}
	*key_len = observed_bytes;
	if (!(key = ft_change_key_size(key, *key_len + 1)))
		return (ft_malloc_error());
	key[observed_bytes] = '\0';
	return ((*key_str = key) == key);
}

int			ft_interpret_map_key(t_matrix *matrix, char *key, int *key_len)
{
	if (key[0] && key[1] && key[2])
		(*matrix).rows = ft_atoi_bsq(key);
	else
		return (ft_map_key_error());
	(*matrix).full = key[*key_len - 2];
	(*matrix).obstacle = key[*key_len - 3];
	(*matrix).empty = key[*key_len - 4];
	(*matrix).matrix = (int **)malloc(sizeof(int *) * (*matrix).rows);
	if (!(*matrix).matrix)
		return (0);
	return (1);
}

int			ft_validate_map_key(int *key_len, int *fd, t_matrix *matrix)
{
	char	*key;

	*key_len = 20;
	if (!ft_read_map_key(key_len, 0, &key, fd))
		return (0);
	if (!key || *key_len < 3)
		return (0);
	if (!(ft_interpret_map_key(matrix, key, key_len)))
		return (0);
	free(key);
	return (1);
}
