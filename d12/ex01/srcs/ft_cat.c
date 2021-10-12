/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 04:57:14 by thakala           #+#    #+#             */
/*   Updated: 2021/09/02 05:40:47 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/d12.h"

int		ft_cat(int argc, char **argv)
{
	int		i;
	int		file_descriptor;
	char	*filename;

	i = 0;
	while (i < argc)
	{
		filename = (argv[i][0] == '-') ? STDIN_FILENO : *(argv + i);
		if ((file_descriptor = open(filename, O_RDONLY)) == -1)
			return (-1);
		if (ft_handle_file(file_descriptor))
			return (-1);
		i++;
	}
	return (0);
}
