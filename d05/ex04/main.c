/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:42:45 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 08:57:18 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void	ft_putchar(char character);

void	ft_putnbr(int number);

void	ft_putstr(char *string);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char			the_meaning_of_life[] = "The Meaning \0f Life"; // \0
	char			character_array_ft[50] = "A string that is longer than the source.";
	char			character_array[50] = "A string that is longer than the source.";
	unsigned int	u;
	char			c;

	u = 0;
	c = 1;
	/*while (u < 49)
	{
		// *(character_array + u) = c;
		// *(character_array_ft + u++) = c;
	}*/
	//*(character_array + u) = '\0';
	//*(character_array_ft + u) = '\0';
	u = 0;
	ft_putstr("Freshly initialized character_array:\n");
	while (u < 50)
	{
		ft_putchar(*(character_array + u++));
		//ft_putchar('\n');
	}
	ft_putchar('\n');
	u = 0;
	strncpy(character_array, the_meaning_of_life, 50);
	ft_putstr("character_array after standard strncpy:\n");
	ft_putchar('\n');
	while (u < 50)
	{
		ft_putchar(*(character_array + u++));
		//ft_putchar('\n');
	}
	ft_putchar('\n');
	u = 0;
	ft_putstr("Freshly initialized character_array_ft:\n");
	while (u < 50)
	{
		ft_putchar(*(character_array_ft + u++));
		//ft_putchar('\n');
	}
	ft_putchar('\n');
	u = 0;
	ft_putstr("character_array_ft after ft_strncpy:\n");
	ft_strncpy(character_array_ft, the_meaning_of_life, 50);
	while (u < 50)
	{
		ft_putchar(*(character_array_ft + u++));
		//ft_putchar('\n');
	}
	ft_putchar('\n');
	return (0);
}
