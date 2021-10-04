/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:42:45 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 19:22:57 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char character);

void	ft_putnbr(int number);

int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(-2147483647 - 1);
	ft_putchar('\n');
	ft_putnbr(-2147483647);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-0);
	ft_putchar('\n');
	ft_putnbr(-00023);
	ft_putchar('\n');
	ft_putnbr(0000023);
	ft_putchar('\n');
	ft_putnbr(10);
	ft_putchar('\n');
	printf("%d\n", -00023);
	printf("%d\n", 0000023);
	return (0);
}
