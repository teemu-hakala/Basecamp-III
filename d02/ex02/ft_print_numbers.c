/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:15:23 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 08:46:39 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char character);

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
		ft_putchar(number++);
}
