/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/09/01 15:24:46 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int		count;
	int		growing;
	int		diminishing;

	count = 0;
	growing = f(*tab, *(tab + 1)) < 0 ? 1 : 0;
	diminishing = f(*tab, *(tab + 1)) > 0 ? 1 : 0;
	while (count < length - 1)
	{
		if (f(*(tab + count), *(tab + count + 1)) == 0)
		{
			count++;
			continue;
		}
		if ((growing && f(*(tab + count), *(tab + count + 1)) > 0) ||
			(diminishing && f(*(tab + count), *(tab + count + 1)) < 0) ||
			(growing == 0 && diminishing == 0 &&
			f(*(tab + count), *(tab + count + 1)) != 0))
			return (0);
		count++;
	}
	return (1);
}
