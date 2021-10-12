/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/08/26 17:50:35 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_calculate_length(int argc, char **argv)
{
	int		length;
	int		word;
	int		index;

	length = 0;
	word = 0;
	while (word < argc)
	{
		index = 0;
		while (argv[word][index] != '\0')
			index++;
		length += index + 1;
		word++;
	}
	return (length);
}

void	ft_create_string(int length, char *result, char **argv)
{
	int		word;
	int		index;
	int		letter;

	word = 0;
	index = 0;
	while (index < length)
	{
		letter = 0;
		while (argv[word][letter] != '\0')
			result[index++] = argv[word][letter++];
		if (index < length)
			result[index] = '\n';
		else
			result[index] = '\0';
		index++;
		word++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	int		length;
	char	*result;

	length = ft_calculate_length(argc, argv);
	result = (char *)malloc(sizeof(*result) * length);
	if (result != 0)
		ft_create_string(length, result, argv);
	return (result);
}
