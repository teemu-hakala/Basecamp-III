/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:33:06 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 12:34:45 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int				max;
	unsigned int	count;

	if (len == 0)
		return (0);
	count = 0;
	max = tab[count];
	while (count < len)
	{
		if (tab[count] > max)
			max = tab[count];
		count++;
	}
	return (max);
}
