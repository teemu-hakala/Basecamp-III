/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:01:31 by thakala           #+#    #+#             */
/*   Updated: 2021/08/20 16:03:09 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char character);

void	ft_putnbr(int number)
{
	if (number < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		ft_putchar('0' + number);
	}
}
