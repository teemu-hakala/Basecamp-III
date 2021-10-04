/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:36:04 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/09/13 16:38:18 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		;
	return (i - 1);
}

int		aff_last_param_main(int argc, char **argv)
{
	if (argc > 0)
	{
		write(1, argv[argc - 1], ft_strlen(argv[argc - 1]));
	}
	write(1, "\n", 1);
	return (1);
}
