/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:01:28 by thakala           #+#    #+#             */
/*   Updated: 2021/08/20 13:42:46 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char character);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i <= 99)
	{
		while (j <= 99)
		{
			ft_putchar('0' + i / 10);
			ft_putchar('0' + i % 10);
			ft_putchar(' ');
			ft_putchar('0' + j / 10);
			ft_putchar('0' + j % 10);
			if (!(j++ == 99 && i == 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		j = ++i + 1;
	}
}
