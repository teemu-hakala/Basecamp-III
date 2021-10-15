/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:15:08 by thakala           #+#    #+#             */
/*   Updated: 2021/09/08 15:28:31 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

t_list			*ft_start_list(t_list *start)
{
	start->part = 0;
	start->next = 0;
	return (start);
}

void			ft_initialize_square(t_square *square)
{
	square->x = -1;
	square->y = -1;
	square->size = -1;
}

int				ft_lseek(int *fd, char *filename, int *key_len)
{
	close(*fd);
	if ((*fd = open(filename, O_RDONLY)) == -1)
		return (ft_open_error());
	ft_skip_key(fd, key_len);
	return (1);
}

t_coordinate	ft_initialize_coordinate(void)
{
	t_coordinate	coordinate;

	coordinate.x = 0;
	coordinate.y = 0;
	return (coordinate);
}
