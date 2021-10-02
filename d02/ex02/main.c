/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:18:04 by thakala           #+#    #+#             */
/*   Updated: 2021/10/02 21:52:40 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char character)
{
	write(1, &character, 1);
	return (0);
}

void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}
