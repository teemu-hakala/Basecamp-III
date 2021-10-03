/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 15:19:58 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	ft_putnbr(int number);

int		ft_is_prime(int index);

/*
** gcc -Wall -Wextra -Werror *.c && time ./a.out | grep ":1" | wc -l
** gcc -Wall -Wextra -Werror *.c && time ./a.out
*/

int	ft_is_prime_eratosthenes(int nb)
{
	int		*sieve[10000];
	int		i;
	int		*p_truth;
	int		truth;

	p_truth = &truth;
	*(sieve + 2) = p_truth;
	i = 0;
	while (i < 10000)
	{
		*(sieve + i) = 0;
		i += 2;
	}
	return (nb);
}

int	main(void)
{
	int		i;
	int		multiple;
	int		multiple2;
	int		eratosthenes;

	i = -1;
	multiple = 0;
	multiple2 = 1;
	eratosthenes = 0;
	if (multiple == 1)
	{
		while (i <= 97)
		{
			ft_putnbr(i);
			ft_putchar(':');
			ft_putnbr(ft_is_prime(i));
			ft_putchar('\n');
			i++;
		}
	}
	else if (eratosthenes == 1)
	{
		i = 10;
		ft_putnbr(i);
		ft_putchar(':');
		ft_putnbr(ft_is_prime_eratosthenes(i));
		ft_putchar('\n');
		i++;
	}
	else if (multiple2 == 1)
	{
		i = 2147395600;
		while (1) //i <= (int)(~0u >> 1))
		{
			ft_putnbr(i);
			ft_putchar(':');
			ft_putnbr(ft_is_prime(i));
			ft_putchar('\n');
			if (i == (int)(~0u >> 1))
				break ;
			i++;
		}
	}
	else
	{
		i = (int)(~0u >> 1);
		ft_putnbr(i);
		ft_putchar(':');
		ft_putnbr(ft_is_prime(i));
		ft_putchar('\n');
		i++;
	}
	return (0);
}
