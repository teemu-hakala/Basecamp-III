/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:38:22 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/09/13 16:41:49 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int first_word_main(int argc, char **argv)
{
	int		len;

	if (argc == 1)
	{
		len = 0;
		while (argv[argc - 1][len] && (argv[argc - 1][len] == ' ' || argv[argc - 1][len] == '\t'))
			len++;
		while (argv[argc - 1][len] && argv[argc - 1][len] != ' ' && argv[argc - 1][len] != '\t')
		{
			write (1, &argv[argc - 1][len++], 1);
		}
	}
	write(1, "\n", 1);
	return (1);
}
