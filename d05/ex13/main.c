/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 16:12:54 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		ft_str_is_lowercase(char *str);

int	main(void)
{
	ft_putnbr(ft_str_is_lowercase("hakkapeliitta"));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_lowercase("hakkape1iitta"));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_lowercase("haXkapeliitta"));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_lowercase(""));
	ft_putchar('\n');
}
