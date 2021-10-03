/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:52:03 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 12:27:47 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(const char *str);

void	ft_putnbr(int number);

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_strcpy(char *source, char *destination)
{
	int	i;

	i = 0;
	while (*(source + i) != '\0')
	{
		*(destination + i) = *(source + i);
		i++;
	}
}

int	main(void)
{
	char	string[100];

	ft_strcpy("The Meaning of Life", string);
	ft_putnbr(ft_atoi(string));
	ft_putchar('\n');
	ft_strcpy("   -The Meaning of Life", string);
	ft_putnbr(ft_atoi(string));
	ft_putchar('\n');
	ft_strcpy("  +The Meaning of Life", string);
	ft_putnbr(ft_atoi(string));
	ft_putchar('\n');
	ft_strcpy("  -1The Meaning of Life", string);
	ft_putnbr(ft_atoi(string));
	ft_putchar('\n');
	ft_strcpy("   2The Meaning of Life", string);
	ft_putnbr(ft_atoi(string));
	ft_putchar('\n');
	ft_strcpy("     +3The Meaning of Life", string);
	ft_putnbr(ft_atoi(string));
	ft_putchar('\n');
	ft_strcpy("     +4-The Meaning of Life", string);
	ft_putnbr(ft_atoi(string));
	ft_putchar('\n');
	ft_strcpy("     +5+8The Meaning of Life", string);
	ft_putnbr(ft_atoi(string));
	ft_putchar('\n');
	ft_strcpy("+678900-8The Meaning of Life", string);
	ft_putnbr(ft_atoi(string));
	ft_putchar('\n');
	return (0);
}
