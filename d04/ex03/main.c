/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 15:04:48 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	ft_putnbr(int number);

int		ft_recursive_power(int nb, int power);

int	main(void)
{
	int	i;
	int	j;

	i = -2;
	while (i <= 4)
	{
		j = -5;
		while (j <= 5)
		{
			ft_putnbr(j);
			ft_putchar('^');
			ft_putnbr(i);
			ft_putchar(':');
			ft_putnbr(ft_recursive_power(j++, i));
			ft_putchar('\n');
		}
		i++;
	}
	return (0);
}
