/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:39:02 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/05 09:24:21 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define ALPHABET_COUNT 26

typedef struct s_ac
{
	char	alphabet;
	int		count;
}			t_ac;

void	fill_array(t_ac *array, char c)
{
	int		i;

	i = 0;
	while (array[i].alphabet)
	{
		if (array[i].alphabet == c)
		{
			array[i].count++;
			return ;
		}
		i++;
	}
	array[i].alphabet = c;
	array[i].count = 1;
}

char	isalpha_helper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	else
	{
		return (0);
	}
}

void	alphabet_checker(t_ac *array, char c)
{
	if ((c = isalpha_helper(c)))
		fill_array(array, c);
}

int	count_alpha_main(int argc, char **argv)
{
	t_ac	array[ALPHABET_COUNT];
	t_ac	nuller;
	int		i;
	int		c;
	char	character;

	if (argc == 1)
	{
		nuller.alphabet = 0;
		nuller.count = 0;
		i = 0;
		while (i < ALPHABET_COUNT)
			array[i++] = nuller;
		c = 0;
		while (argv[argc - 1][c])
		{
			alphabet_checker(array, argv[argc - 1][c]);
			c++;
		}
		i = 0;
		while (array[i].alphabet && i < ALPHABET_COUNT)
		{
			character = '0' + array[i].count;
			write(1, &character, 1);
			write(1, &array[i].alphabet, 1);
			if (array[i + 1].alphabet && i < ALPHABET_COUNT - 1)
			{
				write(1, ", ", 2);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (1);
}
