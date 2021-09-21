/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:38:28 by thakala           #+#    #+#             */
/*   Updated: 2021/08/19 11:35:37 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

int		ft_putchar(char character)
{
	write(1, &character, 1);
	return (0);
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
