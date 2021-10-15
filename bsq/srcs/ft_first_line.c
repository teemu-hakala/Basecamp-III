/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:06:09 by thakala           #+#    #+#             */
/*   Updated: 2021/09/08 15:06:25 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int			ft_read_first_line(t_list *list, int *fd)
{
	int		bytes_read;
	int		observed_bytes;
	char	character;

	observed_bytes = 0;
	while (1)
	{
		if ((bytes_read = read(*fd, &character, 1)) == -1)
			return (ft_read_error());
		observed_bytes += bytes_read;
		if (bytes_read == 0 || character == NEWLINE)
			break ;
		if (!(list = ft_add_link(list, ft_strdup(&character))))
			return (ft_malloc_error());
	}
	return (observed_bytes - 1);
}

int			ft_arrayify_logic(t_list *list, t_coordinate *coordinate,
	t_matrix *matrix, int *row)
{
	if (*list->part == matrix->empty)
	{
		row[coordinate->x] = 1;
		if (matrix->bsq->size < 1)
		{
			matrix->bsq->x = coordinate->x;
			matrix->bsq->y = coordinate->y;
			matrix->bsq->size = 1;
		}
		return (1);
	}
	else if (*list->part == matrix->obstacle)
	{
		row[coordinate->x] = 0;
		if (matrix->bsq->size == -1)
		{
			matrix->bsq->x = coordinate->x;
			matrix->bsq->y = coordinate->y;
			matrix->bsq->size = 0;
		}
		return (1);
	}
	else
		return (0);
}

int			ft_arrayify_first_line(t_list *list, t_matrix *matrix,
	t_coordinate *coordinate)
{
	int				*row;

	if (!(row = (int*)malloc(sizeof(*row) * (matrix->cols))))
		return (ft_malloc_error());
	while (list->next)
	{
		if (!ft_arrayify_logic(list, coordinate, matrix, row))
			return (ft_map_line_error());
		coordinate->x++;
		list = list->next;
	}
	matrix->matrix[coordinate->y++] = row;
	return (1);
}
