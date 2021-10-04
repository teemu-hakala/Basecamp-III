/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 14:42:41 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int number);

int		ft_str_is_alpha(char *str);

int	main(void)
{
	char	battlecry[] = "Hakkapeliitta";

	ft_putnbr(ft_str_is_alpha(battlecry));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_alpha(""));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_alpha("batt!ecry"));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_alpha("The Meaning \0f :Life"));
	ft_putchar('\n');
}
