/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:06:58 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/09/13 17:12:47 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace()
{
		
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


int ft_count_words(char *sentence)
{
	int		word_start;
	int		i;
	int		j;
	char	character;

	i = 0;
	while (sentence[i])
	{
		i = ft_skip_whitespaces(sentence, i);
		word_start = i;
		i = ft_skip_characters(sentence, i);
		j = ft_skip_whitespaces(sentence, i);
		if (!sentence[j])
		{
			while (word_start < i)
			{
				character = sentence[word_start++];
				write(1, &character, 1);
			}
			return (1);
		}
		i = j;
	}
	return (0);
}

int		last_word_main(int argc, char **argv)
{
	if (argc == 1)
		ft_count_words(argv[argc - 1]);
	write(1, "\n", 1);
	return (1);
}
