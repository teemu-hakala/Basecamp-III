/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:42:45 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 20:24:55 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void	ft_putchar(char character);

void	ft_putnbr(int number);

void	ft_putstr(char *string);

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	unsigned int	size = 5;
	char			the_meaning_of_life[] = "The Meaning \0f Life";
	char			character_array[size];
	char			character_array_ft[size];
	unsigned int	u;
	char			c;

	u = 0;
	c = 1;
	while (u < size - 1)
	{
		*(character_array + u) = c;
		*(character_array_ft + u++) = c;
	}
	*(character_array + u) = '\0';
	*(character_array_ft + u) = '\0';
	u = 0;
	ft_putstr("Freshly initialized character_array:\n");
	while (u < size)// + 2)
	{
		ft_putchar(*(character_array + u++));
	}
	ft_putchar('\n');
	u = 0;
	strcpy(character_array, the_meaning_of_life);
	ft_putstr("character_array after standard strcpy:\n");
	ft_putchar('\n');
	while (u < size)// + 20)
	{
		ft_putchar(*(character_array + u++));
	}
	ft_putchar('\n');
	u = 0;
	ft_putstr("Freshly initialized character_array_ft:\n");
	while (u < size)// + 2)
	{
		ft_putchar(*(character_array_ft + u++));
	}
	ft_putchar('\n');
	u = 0;
	ft_putstr("character_array_ft after ft_strcpy:\n");
	ft_strcpy(character_array_ft, the_meaning_of_life);
	while (u < size)// + 20)
	{
		ft_putchar(*(character_array_ft + u++));
	}
	ft_putchar('\n');
	return (0);
}
