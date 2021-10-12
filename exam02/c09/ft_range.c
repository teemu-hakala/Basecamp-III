/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:41:18 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 12:45:42 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*result;
	int	count;
	int	step;

	if (start < end)
	{
		result = (int *)malloc(sizeof(int) * (end - start + 1));
		step = 1;
	}
	else
	{
		result = (int *)malloc(sizeof(int) * (start - end + 1));
		step = -1;
	}
	if (!result || start == end)
	{
		while (!result)
		{
			result = (int *)malloc(sizeof(int) * 1);
		}
		result[0] = 0;
	}
	count = 0;
	while (count < step * (end - start + step))
	{
		result[count] = start + count * step;
		count++;
	}
	return (result);
}
