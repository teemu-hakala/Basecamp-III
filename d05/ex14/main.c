/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 16:22:58 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int number);

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	ft_putnbr(ft_str_is_uppercase("HAKKAPELIITTA"));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_uppercase("Hakkapeliitta"));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_uppercase(""));
	ft_putchar('\n');
}
