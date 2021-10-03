/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:01:31 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 09:07:18 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char character);

void	ft_putnbr(int number)
{
	if (number < 0)
	{
		ft_putchar('-');
		if (number == (int)(~0u))
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
	{
		ft_putchar('0' + number);
	}
}
