/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 15:06:37 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	ft_putnbr(int number);

int		ft_fibonacci(int index);

int	main(void)
{
	int	i;

	i = -1;
	while (i <= 33)
	{
		ft_putnbr(i);
		ft_putchar(':');
		ft_putnbr(ft_fibonacci(i));
		ft_putchar('\n');
		i++;
	}
	return (0);
}
