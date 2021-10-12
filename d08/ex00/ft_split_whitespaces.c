/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/08/28 06:59:52 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count_words(char *str)
{
	int words;

	words = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			words++;
			while (*str == ' ' || *str == '\t' || *str == '\n')
				str++;
		}
		else
			str++;
	}
	return (words > 0 ? words + 1 : words);
}

void	ft_place_words(char **sentence, char *str)
{
	char	*word;
	int		wordnumber;
	int		first;
	int		last;
	int		d;
	int		i;
	int		c;
	sentence = &word;

	first = 0;
	last = 0;
	wordnumber = 0;
	d = 0;
	c = 0;
	while (!c)
	{
		printf("character as last: %c\n", str[last]);
		if (str[last] == ' ' || str[last] == '\t' || str[last] == '\n' || !str[last])
		{
			while ((str[last + d] == ' ' || str[last + d] == '\t' || str[last + d] == '\n') && str[last + d])
				d++;
			if (last - first > 0)
			{
				printf("wordlength: %d\n", last - first + 1);
				word = (char *)malloc(sizeof(*word) * (last - first + 1));
				i = 0;
				while (first < last)
				{
					word[i++] = str[first++];
				}
				word[i] = '\0';
				printf("%s\n", word);
				sentence[wordnumber++] = word; // ERROR
				//free(word);
				first = last += d;
				if (str[last] == '\0')
					c = 1;
			}
			d = 0;
		}
		else
			while (!(str[last] == ' ' || str[last] == '\t' || str[last]== '\n') && str[last])
				last++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		words;
	char	**sentence;

	words = ft_count_words(str);
	sentence = (char **)malloc(sizeof(**sentence) * (words + 1));
	ft_place_words(sentence, str);
	return (sentence);
}
