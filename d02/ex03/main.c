/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:55:58 by thakala           #+#    #+#             */
/*   Updated: 2021/08/18 17:53:28 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char character)
{
	write(1, &character, 1);
	return (0);
}

void	ft_is_negative(int integer);

int		main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
}
