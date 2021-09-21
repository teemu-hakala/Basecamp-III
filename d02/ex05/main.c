/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:01:57 by thakala           #+#    #+#             */
/*   Updated: 2021/08/19 04:34:15 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

int		ft_putchar(char character)
{
	write(1, &character, 1);
	return (0);
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
