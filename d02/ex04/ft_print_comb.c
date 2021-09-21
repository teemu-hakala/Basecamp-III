/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:38:25 by thakala           #+#    #+#             */
/*   Updated: 2021/08/20 13:40:01 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char character);

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
				ft_putchar('0' + i);
				ft_putchar('0' + j);
				ft_putchar('0' + k);
				if (!(k++ == 9 && i == 7 && j == 8))
				{
					write(1, ", ", 2);
				}
			}
			k = ++j + 1;
		}
		j = i++ + 1;
	}
}
