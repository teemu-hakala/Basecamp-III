/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 09:44:06 by thakala           #+#    #+#             */
/*   Updated: 2021/09/09 16:25:15 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int			ft_validate_map_rows(t_list *start, t_matrix *matrix, int *fd,
	t_square *square)
{
	t_list			*list;
	t_coordinate	coordinate;

	list = ft_start_list(start);
	matrix->cols = ft_read_first_line(list, fd);
	if (!matrix->cols)
		return (0);
	ft_initialize_square(square);
	matrix->bsq = square;
	coordinate = ft_initialize_coordinate();
	if (!ft_arrayify_first_line(list = start, matrix, &coordinate))
		return (0);
	ft_free_list(start->next, list);
	if (!ft_interpret_rows(matrix, fd, &coordinate))
		return (0);
	return (1);
}

int			ft_validate_map(char *filename)
{
	int				fd;
	int				key_len;
	t_matrix		matrix;
	t_list			start;
	t_square		square;

	if ((fd = open(filename, O_RDONLY)) == -1)
		return (ft_open_error());
	if (!ft_validate_map_key(&key_len, &fd, &matrix))
		return (0);
	if (!ft_validate_map_rows(&start, &matrix, &fd, &square))
		return (0);
	if (!ft_lseek(&fd, filename, &key_len))
		return (0);
	ft_print_matrix(&matrix, &fd);
	ft_free_matrix(&matrix, 1);
	matrix.matrix = 0;
	return (1);
}

void		ft_validate_map_stdin(void)
{
	return ;
}
