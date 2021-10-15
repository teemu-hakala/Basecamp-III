/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:26:30 by thakala           #+#    #+#             */
/*   Updated: 2021/09/08 15:26:53 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char		*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (dest);
}

char		*ft_strdup(char *str)
{
	char	*duplicate;

	duplicate = (char *)malloc(sizeof(*duplicate) * ft_strlen(str));
	duplicate = ft_strcpy(duplicate, str);
	return (duplicate);
}

int			ft_minimum(int a, int b)
{
	return (a < b) ? a : b;
}
