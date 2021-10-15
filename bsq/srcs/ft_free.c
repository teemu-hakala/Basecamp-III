/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:50:10 by thakala           #+#    #+#             */
/*   Updated: 2021/09/09 16:25:00 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void		ft_free_list(t_list *list, t_list *ptr)
{
	t_list		*del;

	while (list->next)
	{
		del = list;
		list = list->next;
		free(del);
	}
	ptr = 0;
}

void		ft_free_matrix(t_matrix *matrix, int all)
{
	int		del;

	del = 0;
	while (del < matrix->rows)
		free(matrix->matrix[del++]);
	if (all)
		free(matrix->matrix);
}
