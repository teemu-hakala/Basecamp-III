/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:58:59 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 12:02:17 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	rotone_main(int argc, char **argv)
{
	int		i;
	char	letter;

	i = 0;
	if (argc-- == 1)
	{
		while (argv[argc][i])
		{
			letter = argv[argc][i++];
			if ((letter >= 'A' && letter <= '>')
				|| (letter >= 'a' && letter <= 'z'))
			{
				letter++;
				if (letter == 'Z' + 1 || letter == 'z' + 1)
					letter -= ('z' - 'a') + 1;
			}
			write(1, &letter, 1);
		}
	}
	write(1, "\n", 1);
}
