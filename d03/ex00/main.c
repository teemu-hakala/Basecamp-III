/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:53:37 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 11:16:27 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

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
	int		integer;
	int		*p_integer;

	integer = -24;
	p_integer = &integer;
	ft_putnbr(integer);
	ft_putchar('\n');
	ft_ft(p_integer);
	ft_putnbr(integer);
	ft_putchar('\n');
	return (0);
}
