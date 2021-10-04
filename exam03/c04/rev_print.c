/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:31:03 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/09/13 16:31:56 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *string)
{
	int		i;

	i = 0;
	while (string[i++])
		;
	return (i - 1);
}
char	*rev_print(char *str)
{
	int		length;

	length = ft_strlen(str);
	while (0 < length--)
	{
		write(1, &str[length], 1);
	}
	return (str);
}
