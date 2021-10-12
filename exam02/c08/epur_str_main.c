/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:35:30 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 12:40:36 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_delimiter(char character)
{
	return (character == ' ' || character == '\t');
}

int	epur_str_maain(int argc, char **argv)
{
	int		index;
	int		begin_idx;
	int		first;
	char	character;
	char	*sentence;

	if (argc != 1)
	{
		write(1, "\n", 1);
		return (1);
	}
	sentence = argv[0];
	index = 0;
	begin_idx = index;
	first = 1;
	character = sentence[index];
	while (character)
	{
		while (ft_is_delimiter(character) && character)
		{
			index++;
			character = sentence[index];
		}
		begin_idx = index;
		while (!ft_is_delimiter(character) && character)
		{
			index++;
			character = sentence[index];
		}
		if (first || !character)
			first = 0;
		else
			write(1, " ", 1);
		while (begin_idx < index)
		{
			write(1, &sentence[begin_idx], 1);
			begin_idx++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
