/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 16:01:41 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int number);

int		ft_str_is_numeric(char *str);

int	main(void)
{
	ft_putnbr(ft_str_is_numeric("0123456789"));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_numeric("4a1"));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_numeric("abc"));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_numeric(""));
	ft_putchar('\n');
}
