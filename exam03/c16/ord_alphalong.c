/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ord_alphalong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:48:57 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/09/13 21:20:32 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_isspace(char c)
{
	return (c == ' ' || c == '\t');
}

int		ft_skip_whitespaces(char *sentence, int idx)
{
	while (sentence[idx] && ft_isspace(sentence[idx]))
		idx++;
	return (idx);
}

int		ft_skip_characters(char *sentence, int jdx)
{
	while (sentence[jdx] && !ft_isspace(sentence[jdx]))
	{
		jdx++;
	}
	return (jdx);
}

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char *ft_next_word(char *sentence, int *next_word_index)
{
	int		word_start;
	int		i;
	int		d;
	int		j;
	//char	character;
	char	*word;

	i = *next_word_index;
	while (sentence[i])
	{
		i = ft_skip_whitespaces(sentence, i);



		
	}
}

