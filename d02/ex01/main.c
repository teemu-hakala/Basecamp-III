/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:09:35 by thakala           #+#    #+#             */
/*   Updated: 2021/10/02 21:52:28 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int	ft_putchar(char character)
{
	write(1, &character, 1);
	return (0);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
