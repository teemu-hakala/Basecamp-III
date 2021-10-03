/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 15:20:33 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	ft_putnbr(int number);

int		ft_sqrt(int index);

void	call_squares(void)
{
	int		i;
	int		sqrt;

	i = -10;
	while (i <= 46341)
	{
		sqrt = ft_sqrt(i * i);
		ft_putnbr(i);
		ft_putchar(';');
		ft_putnbr(i * i);
		ft_putchar(';');
		ft_putnbr(sqrt);
		ft_putchar(';');
		ft_putchar('\n');
		i++;
	}
}

void	printer(void)
{
	int		offset;
	int		k;
	int		i;
	int		j;

	offset = 32772;
	k = offset;
	ft_putnbr(k);
	ft_putchar(';');
	ft_putchar('\n');
	i = 2 + 56 + 1;
	while (k < 46340)
	{
		if (!(i % 14))
		{
			if (!(i % (16 * 14)))
			{
				j = 2;
				i = 0;
			}
			else if (!(i % (4 * 14)))
				j = 6;
			else
				j = 8;
		}
		else if (i % 2)
			j = 2;
		else
			j = 4;
		ft_putnbr(k += j);
		ft_putchar(';');
		ft_putchar('\n');
		i++;
	}
}

void	caller(void)
{
	int		offset;
	int		k;
	int		i;
	int		j;
	int		sqrt;

	offset = 32772;
	k = offset;
	sqrt = ft_sqrt(k);
	if (sqrt)
	{
		ft_putnbr(k);
		ft_putchar(':');
		ft_putnbr(sqrt);
		ft_putchar('\n');
	}
	i = 2 + 56 + 1;
	while (k < 46340)
	{
		if (!(i % 14))
		{
			if (!(i % (16 * 14)))
			{
				j = 2;
				i = 0;
			}
			else if (!(i % (4 * 14)))
				j = 6;
			else
				j = 8;
		}
		else if (i % 2)
			j = 2;
		else
			j = 4;
		sqrt = ft_sqrt(k += j);
		if (sqrt)
		{
			ft_putnbr(k);
			ft_putchar(':');
			ft_putnbr(sqrt);
			ft_putchar('\n');
		}
		i++;
	}
}

int	main(void)
{
	/*int		i;
	int		offset;
	int		j;
	int		k;*/
	//int		sqrt;
	/*i = -1; // From -1 upto 4225.
	while (i <= 4225) // 65 * 65
	{
		ft_putnbr(i);
		ft_putchar(':');
		ft_putnbr(ft_sqrt(i));
		ft_putchar('\n');
		i++;
	}
	//i = (~0u >> 1) - 100;
	i = 2147395599; // Largest integer smaller than the largest square in int.
	while (i < (int)(~0u >> 1))
	{
		ft_putnbr(i);
		ft_putchar(':');
		ft_putnbr(ft_sqrt(i));
		ft_putchar('\n');
		i++;
	}*/
	/*i = (int)(~0u >> 1) - 100000; // 99999 integers until INT_MAX - 1.
	while (i < (int)(~0u >> 1))
	{
		ft_putnbr(i);
		ft_putchar(':');
		ft_putnbr(ft_sqrt(i));
		ft_putchar('\n');
		i++;
	}*/
	call_squares();
	//caller();
	return (0);
}
