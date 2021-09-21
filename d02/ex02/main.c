/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:18:04 by thakala           #+#    #+#             */
/*   Updated: 2021/08/18 17:51:44 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char character)
{
	write(1, &character, 1);
	return (0);
}

void	ft_print_numbers(void);

int		main(void)
{
	ft_print_numbers();
	return (0);
}
