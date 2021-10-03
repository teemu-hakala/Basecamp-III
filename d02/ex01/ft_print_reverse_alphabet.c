/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:03:27 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 08:44:46 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char character);

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
		ft_putchar(alphabet--);
}
