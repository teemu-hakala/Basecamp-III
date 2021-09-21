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

int		ft_putchar(char character);

void	ft_print_alphabet(void)
{
	char	*alphabet;
	int		i;

	alphabet = "abcdefghijklmnopqrstuvwxyz\0";
	i = 0;
	while (alphabet[i] != '\0')
	{
		ft_putchar(alphabet[i]);
		i++;
	}
}
