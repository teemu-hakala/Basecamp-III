/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:25:39 by thakala           #+#    #+#             */
/*   Updated: 2021/08/18 17:45:40 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

int		ft_putchar(char character)
{
	write(1, &character, 1);
	return (0);
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
