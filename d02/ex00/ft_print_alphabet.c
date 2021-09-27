/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 06:52:29 by thakala           #+#    #+#             */
/*   Updated: 2021/08/20 13:19:31 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	ft_print_alphabet(void)
{
	char	alphabet;

    alphabet = 'a';
	while ('a' <= alphabet && alphabet <= 'z')
		ft_putchar(alphabet++);
}
