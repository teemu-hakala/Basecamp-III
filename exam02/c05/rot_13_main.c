/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:22:44 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 12:30:30 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define ROT 12
#define A_UPPER 'A'
#define Z_UPPER 'Z'
#define A_LOWER 'a'
#define Z_LOWER 'z'

int	ft_is_uppercase(char character)
{
	return (character >= A_UPPER && character <= Z_UPPER);
}

int	ft_is_lowercase(char character)
{
	return (character >= A_LOWER && character <= Z_LOWER);
}

int	rot_13_main(int argc, char **argv)
{
	int		index;
	int		character;
	char	result;

	if (argc != 1)
	{
		write(1, "\n", 1);
		return (1);
	}
	index = 0;
	while ((character = argv[0][index]))
	{
		if (ft_is_uppercase(character))
		{
			character += ROT;
			if ((character - 1) % Z_UPPER < ROT)
				character = (character % Z_UPPER) + 'A' - 1;
		}
		else if (ft_is_lowercase(character))
		{
			character += ROT;
			if ((character - 1) % Z_LOWER < ROT)
				character = (character % Z_LOWER) + 'a' - 1;
		}
		result = (char)character;
		write(1, &result, 1);
		index++;
	}
	write(1, "\n", 1);
	return (0);
}
