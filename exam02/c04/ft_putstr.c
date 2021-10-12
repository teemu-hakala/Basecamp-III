/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:20:35 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 12:22:02 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	character_count;

	character_count = 0;
	while (*str++)
		character_count++;
	return (character_count);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
