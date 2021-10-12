/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revalpha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:31:06 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 11:33:23 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	revalpha(void)
{
	char	alphabet;
	char	uppercase;
	char	newline;
	char	difference;

	alphabet = 'z';
	difference = 32;
	uppercase = alphabet - difference;
	newline = '\n';
	while (alphabet >= 'a')
	{
		if (alphabet % 2 == 0)
		{
			write(1, &alphabet, 1);
		}
		else
		{
			uppercase = alphabet - difference;
			write(1, &uppercase, 1);
		}
		alphabet--;
	}
	write(1, &newline, 1);
}
