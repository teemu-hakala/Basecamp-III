/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:42:45 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 12:15:10 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);

int	ft_putchar(char character)
{
	write(1, &character, 1);
	return (0);
}

void	ft_putnbr(int number)
{
	if (number < 0)
	{
		ft_putchar('-');
		if (number == -2147483648)
		{
			ft_putnbr((int)(~0u >> 1) / 10);
			ft_putnbr(8);
		}
		else
			ft_putnbr(-number);
	}
	else if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
		ft_putchar('0' + number);
}

int	main(void)
{
	ft_putnbr(ft_strlen("The Meaning of Life"));
	ft_putchar('=');
	ft_putnbr(19);
	ft_putchar('\n');
	ft_putnbr(ft_strlen("The Universe and Everything"));
	ft_putchar('=');
	ft_putnbr(27);
	ft_putchar('\n');
	return (0);
}
