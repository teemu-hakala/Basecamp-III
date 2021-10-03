/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 17:15:41 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	ft_putnbr(int number);

int		ft_find_next_prime(int index);

/*
** gcc -Wall -Wextra -Werror *.c && time ./a.out | grep ":1" | wc -l
*/

int	main(void)
{
	int		i;
	int		multiple;

	i = -1;
	multiple = 1;
	if (multiple == 1)
	{
		while (i <= 97)
		{
			ft_putnbr(i);
			ft_putchar(':');
			ft_putnbr(ft_find_next_prime(i));
			ft_putchar('\n');
			i++;
		}
		ft_putnbr(1000000);
		ft_putchar(':');
		ft_putnbr(ft_find_next_prime(1000000));
		ft_putchar('\n');
		i = 2147483625;
		while (i < (int)(~0u >> 1))
		{
			ft_putnbr(i);
			ft_putchar(':');
			ft_putnbr(ft_find_next_prime(i));
			ft_putchar('\n');
			i++;
		}
		i = (int)(~0u >> 1);
		ft_putnbr(i);
		ft_putchar(':');
		ft_putnbr(ft_find_next_prime(i));
		ft_putchar('\n');
	}
	else
	{
		i = 10;
		ft_putnbr(i);
		ft_putchar(':');
		ft_putnbr(ft_find_next_prime(i));
		ft_putchar('\n');
		i++;
	}
	return (0);
}
