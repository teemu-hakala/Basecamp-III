/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:38:25 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 08:51:52 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char character);

void	ft_putdigits(int i, int j, int k)
{
	ft_putchar('0' + i);
	ft_putchar('0' + j);
	ft_putchar('0' + k);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = 0;
	j = 1;
	k = 2;
	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				ft_putdigits(i, j, k);
				if (!(k++ == 9 && i == 7 && j == 8))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			k = ++j + 1;
		}
		j = i++ + 1;
	}
}
