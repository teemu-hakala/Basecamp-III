/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/08/21 07:48:04 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_eight_queens_puzzle(void);

void	ft_putchar(char character);

void	ft_putnbr(int number);

int		main(void)
{
	ft_putnbr(ft_eight_queens_puzzle());
	ft_putchar('\n');
	return (0);
}
