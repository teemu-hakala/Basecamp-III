/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:02:01 by thakala           #+#    #+#             */
/*   Updated: 2021/09/19 20:35:59 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int		n;

	n = 1;
	while (n <= 9)
	{
		ft_print_combn(n++);
		ft_putchar('\n');
		ft_putchar('\n');
	}
	return (0);
}
