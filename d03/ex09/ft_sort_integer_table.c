/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:13 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 19:44:08 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		idx;

	idx = 0;
	while (idx < size - 1)
	{
		if (tab[idx] > tab[idx + 1])
		{
			tab[idx] ^= tab[idx + 1];
			tab[idx + 1] ^= tab[idx];
			tab[idx] ^= tab[idx + 1];
			if (idx > 0)
				idx--;
		}
		else
			idx++;
	}
}
