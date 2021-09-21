/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:03:27 by thakala           #+#    #+#             */
/*   Updated: 2021/08/18 17:48:57 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char character);

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;
	int		i;

	alphabet = 'z';
	i = 0;
	while (i < 26)
	{
		ft_putchar(alphabet);
		alphabet--;
		i++;
	}
}
