/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/08/25 18:23:03 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		length;
	int		c;

	length = 0;
	while (*(src + length++) != '\0')
		;
	result = (char *)malloc(sizeof(*src) * length);
	c = 0;
	while (result != 0 && c < length)
	{
		*(result + c) = *(src + c);
		c++;
	}
	return (result);
}
