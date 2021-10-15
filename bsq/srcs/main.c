/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:28:39 by mrozhnov          #+#    #+#             */
/*   Updated: 2021/09/09 16:26:55 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		main(int argc, char **argv)
{
	int		map;
	char	buf[BUF_LEN];
	int		fd;
	int		bytes_read;

	if (argc == 1)
	{
		fd = open(FILENAME, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
		while ((bytes_read = read(STDIN_FILENO, buf, BUF_LEN)))
			write(fd, buf, bytes_read);
		close(fd);
		ft_validate_map(FILENAME);
	}
	else
	{
		map = 1;
		while (map < argc)
		{
			ft_validate_map(argv[map++]);
			ft_putchar('\n');
		}
	}
}
