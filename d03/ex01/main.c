/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:53:37 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 12:39:52 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

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
	int		**p_integer2;
	int		***p_integer3;
	int		****p_integer4;
	int		*****p_integer5;
	int		******p_integer6;
	int		*******p_integer7;
	int		********p_integer8;
	int		*********p_integer9;

	p_integer = &integer;
	p_integer2 = &p_integer;
	p_integer3 = &p_integer2;
	p_integer4 = &p_integer3;
	p_integer5 = &p_integer4;
	p_integer6 = &p_integer5;
	p_integer7 = &p_integer6;
	p_integer8 = &p_integer7;
	p_integer9 = &p_integer8;
	ft_ultimate_ft(p_integer9);
	ft_putnbr(integer);
	ft_putchar('\n');
	return (0);
}
