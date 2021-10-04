/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:13:29 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/09/13 17:15:39 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		difference;
	int		sign;
	int		*range;
	int		i;
	int		j;

	difference = end - start;
	sign = (difference < 0) ? -1 : 1;
	range = (int *)malloc(sizeof(*range) * (sign * difference + 1));
	if (!range)
		return (0);
	i = 0;
	j = start;
	while (i <= (end - start) * sign)
	{
		range[i] = j;
		i++;
		j += sign;
	}
	return (range);
}
