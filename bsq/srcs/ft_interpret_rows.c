/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interpret_rows.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:10:00 by thakala           #+#    #+#             */
/*   Updated: 2021/09/08 15:28:41 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_interpret_rows_if(t_matrix *matrix, int *row, char *character,
	t_coordinate *coordinate)
{
	if (*character == matrix->empty)
	{
		row[coordinate->x] = 1;
		if (matrix->bsq->size < 1)
		{
			matrix->bsq->x = coordinate->x;
			matrix->bsq->y = coordinate->x;
			matrix->bsq->size = 1;
		}
	}
	else if (*character == matrix->obstacle)
		row[coordinate->x] = 0;
	else
		return (ft_map_line_error());
	return (1);
}

int		ft_interpret_rows_else(t_matrix *matrix, int *row, char *character,
	t_coordinate *coordinate)
{
	if (*character == matrix->empty)
	{
		row[coordinate->x] = ft_minimum(
				ft_minimum(matrix->matrix[coordinate->y - 1][coordinate->x],
				matrix->matrix[coordinate->y - 1][coordinate->x - 1]),
			row[coordinate->x - 1]) + 1;
		if (row[coordinate->x] > matrix->bsq->size)
		{
			matrix->bsq->x = coordinate->x;
			matrix->bsq->y = coordinate->y;
			matrix->bsq->size = row[coordinate->x];
		}
	}
	else if (*character == matrix->obstacle)
		row[coordinate->x] = 0;
	else
		return (ft_map_line_error());
	return (1);
}

int		ft_interpret_rows_logic(t_matrix *matrix, int *row, char *character,
	t_coordinate *coordinate)
{
	if (coordinate->x == 0)
	{
		if (!ft_interpret_rows_if(matrix, row, character, coordinate))
			return (0);
	}
	else
	{
		if (!ft_interpret_rows_else(matrix, row, character, coordinate))
			return (0);
	}
	return (1);
}

int		ft_interpret_rows_reader(int *fd, t_matrix *matrix,
	t_coordinate *coordinate)
{
	char	character;
	int		bytes_read;
	int		*row;

	if (!(row = (int*)malloc(sizeof(*row) * (matrix->cols))))
		return (ft_malloc_error());
	coordinate->x = 0;
	while (1)
	{
		if ((bytes_read = read(*fd, &character, 1)) == -1)
			return (ft_read_error());
		if (bytes_read == 0)
			break ;
		if (coordinate->x == matrix->cols && character != NEWLINE)
			return (ft_map_line_error());
		else if (coordinate->x != matrix->cols && character == NEWLINE)
			return (ft_map_line_error());
		else if (coordinate->x == matrix->cols && character == NEWLINE)
			break ;
		ft_interpret_rows_logic(matrix, row, &character, coordinate);
		coordinate->x++;
	}
	matrix->matrix[coordinate->y++] = row;
	return (1);
}

int		ft_interpret_rows(t_matrix *matrix, int *fd,
	t_coordinate *coordinate)
{
	while (coordinate->y < matrix->rows)
	{
		if (!ft_interpret_rows_reader(fd, matrix, coordinate))
			return (0);
	}
	return (1);
}
