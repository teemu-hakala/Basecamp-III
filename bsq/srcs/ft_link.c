/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_link.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:25:14 by thakala           #+#    #+#             */
/*   Updated: 2021/09/08 14:50:02 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

t_list		*ft_add_link(t_list *list, char *part)
{
	t_list	*new_link;

	new_link = (t_list*)malloc(sizeof(t_list));
	if (new_link)
	{
		list->part = part;
		new_link->part = 0;
		new_link->next = 0;
		list->next = new_link;
	}
	return (new_link);
}

void		ft_print_list(t_list *list)
{
	while (list->part)
	{
		ft_putstr(list->part, STDOUT_FILENO);
		list = list->next;
	}
}
