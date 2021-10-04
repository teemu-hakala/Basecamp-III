/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:34:33 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/09/13 18:38:50 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list t_list;

struct s_list
{
	int		data;
	t_list	*next;
};

/*
** Put destination after source in the linked list.
*/

void	ft_swap(t_list *src, t_list *dest)
{
	int		swap;

	swap = dest->data;
	dest->data = src->data;
	src->data = swap;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		in_order;
	t_list	*beginning;

	in_order = 0;
	beginning = lst;
	while (!in_order)
	{
		lst = beginning;
		while (lst && lst->next)
		{
			if (cmp(lst->data, lst->next->data) == 0)
			{
				ft_swap(lst, lst->next);
				break ;
			}
			lst = lst->next;
		}
		if (!lst || !lst->next)
		{
			in_order = 1;
		}
	}
	return (beginning);
}
