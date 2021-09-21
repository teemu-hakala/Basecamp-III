/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:09:35 by thakala           #+#    #+#             */
/*   Updated: 2021/08/18 17:49:26 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int		ft_putchar(char character)
{
	write(1, &character, 1);
	return (0);
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
