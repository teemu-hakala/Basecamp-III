/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:01:59 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 08:58:12 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int number);

int	ft_putchar(char character)
{
	write(1, &character, 1);
	return (0);
}

int	main(void)
{
	ft_putnbr((int)(~0u));
	ft_putchar('\n');
	ft_putnbr(-514532);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(872942);
	ft_putchar('\n');
	return (0);
}
