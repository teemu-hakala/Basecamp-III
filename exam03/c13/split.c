/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:27:15 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/09/13 18:33:04 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		ft_count_words(char *str)
{
	int		wc;
	int		i;

	wc = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_isspace(str[i]))
			i++;
		if (str[i])
			wc++;
		while (str[i] && !ft_isspace(str[i]))
			i++;
	}
	return (wc);
}

int		ft_word_length(char *str)
{
	int		i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	return (i);
}

char	**ft_split(char *str)
{
	int		word_count;
	char	**result;
	char	*word;
	int		i;
	int		j;
	int		word_idx;
	int		word_length;

	word_count = ft_count_words(str);
	result = (char **)malloc(sizeof(*result) * word_count + 1);
	word_idx = 0;
	i = 0;
	while (word_idx < word_count)
	{
		
	}
}
