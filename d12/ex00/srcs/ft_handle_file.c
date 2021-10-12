/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:12:06 by thakala           #+#    #+#             */
/*   Updated: 2021/09/02 08:28:54 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/d12.h"

int		ft_handle_file(char **argv)
{
	int		file_descriptor;
	int		characters;
	char	buffer[BUF_LEN + 1];

	if ((file_descriptor = open(*argv, O_RDONLY)) == -1)
		return (-1);
	while ((characters = read(file_descriptor, buffer, BUF_LEN)))
	{
		if (characters == -1)
			return (-1);
		buffer[characters] = '\0';
		ft_putstr(buffer);
	}
	if (close(file_descriptor) == -1)
		return (-1);
	return (0);
}
