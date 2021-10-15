/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:57:29 by thakala           #+#    #+#             */
/*   Updated: 2021/09/09 16:27:45 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		ft_skip_key(int *fd, int *key_len)
{
	char	symbol;
	int		symbols;
	int		bytes_read;

	bytes_read = 0;
	symbols = 0;
	while (symbols < *key_len)
	{
		if ((bytes_read = read(*fd, &symbol, 1)) == -1)
			return (ft_read_error());
		else if (bytes_read == 0)
			return (0);
		symbols++;
	}
	return (1);
}

char	ft_read_next_symbol(int *fd)
{
	char	symbol;
	int		bytes_read;

	while (1)
	{
		if ((bytes_read = read(*fd, &symbol, 1)) == -1)
			return (ft_read_error());
		else if (bytes_read == 0)
			return (0);
		if (symbol != NEWLINE)
			break ;
	}
	return (symbol);
}

void	ft_print_matrix(t_matrix *matrix, int *fd)
{
	int		i;
	int		j;
	char	symbol;

	j = 0;
	while (j < matrix->rows)
	{
		i = 0;
		while (i < matrix->cols)
		{
			symbol = ft_read_next_symbol(fd);
			if (i >= matrix->bsq->x - (matrix->bsq->size - 1)
				&& i <= matrix->bsq->x
				&& j >= matrix->bsq->y - (matrix->bsq->size - 1)
				&& j <= matrix->bsq->y)
				ft_putchar(matrix->full);
			else
				ft_putchar(symbol);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
