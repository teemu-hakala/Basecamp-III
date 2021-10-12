/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/08/26 07:29:33 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*streak;
	int		i;

	i = 0;
	if (min < max)
		streak = (int *)malloc(sizeof(*streak) * (max - min));
	else
	{
		streak = 0;
		*range = 0;
		return (0);
	}
	while (min < max)
		*(streak + i++) = min++;
	*range = streak;
	return (i);
}
