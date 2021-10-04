/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 17:44:09 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putnbr(int number);

int		ft_str_is_printable(char *str);

int	main(void)
{
	char	c;

	c = (char)((~0u >> 31) << 7);
	while (1)
	{
		if (isprint(c) == ft_str_is_printable(&c))
			printf("%c: 1\n", c);
		else
			printf("%c: 0\n", c);
		if (c < 127)
			c++;
		else
			break ;
	}
	printf("empty: %d\n", ft_str_is_printable(""));
	printf("empty isprint: %d\n", isprint(*""));
	return (0);
}
