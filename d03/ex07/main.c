/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:52:03 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 12:21:51 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str);

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
		ft_putchar(*(str + i++));
}

void	ft_strcpy(char *source, char *destination)
{
	int	i;

	i = 0;
	while (*(source + i) != '\0')
	{
		*(destination + i) = *(source + i);
		i++;
	}
}

int	main(void)
{
	char	string[20];
	int		i;

	i = 0;
	while (i < 20)
		string[i++] = 0;
	ft_strcpy("The Meaning of Life", string);
	ft_putstr(ft_strrev(string));
	ft_putchar('\n');
	return (0);
}
