/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:29:08 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 11:30:31 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_countdown(void)
{
	char	digit;
	char	newline;

	digit = '9';
	newline = '\n';
	while (digit >= '0')
	{
		write(1, &digit, 1);
		digit--;
	}
	write(1, &newline, 1);
}
