/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:46:25 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 12:48:49 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list	t_list;

struct	s_list
{
	void	*data;
	t_list	*next;
};

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		if (begin_list->data)
			(*f)(begin_list->data);
		if (begin_list->next)
			begin_list = begin_list->next;
		else
			break ;
	}
}
