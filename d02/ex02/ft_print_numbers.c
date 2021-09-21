/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:15:23 by thakala           #+#    #+#             */
/*   Updated: 2021/08/18 17:51:00 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char character);

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number != '9' + 1)
	{
		ft_putchar(number++);
	}
}
