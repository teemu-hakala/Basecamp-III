/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 09:18:42 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putchar(char character);

void	ft_putstr(char *str);

void	ft_putnbr(int number);

int		ft_strcmp(char *string1, char *string2);

int	main(void)
{
	char	*string1;
	char	*string2;
	int		i;
	int		j;

	string1 = "aaaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaaaz";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaabz";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaza";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaaz";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaab";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaaz";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "baaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "ffaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "caaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	string1 = " z";
	string2 = "        zzzzzzzzzzz";
	ft_putnbr(ft_strcmp(string1, string2) == strcmp(string1, string2));
	ft_putchar('\n');
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaaaz";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaabz";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaza";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaaz";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaab";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaaz";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "baaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "ffaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	string1 = "caaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	string1 = " z";
	string2 = "        zzzzzzzzzzz";
	ft_putnbr(ft_strcmp(string1, string2));
	ft_putchar(' ');
	ft_putnbr(strcmp(string1, string2));
	ft_putchar('\n');
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaab";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaaz";
	string2 = "aaaab";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaabz";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaza";
	string2 = "aaaab";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaz";
	string2 = "aaaab";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaab";
	string2 = "aaaab";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaab";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaaz";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "baaaa";
	string2 = "aaaab";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "ffaaa";
	string2 = "aaaab";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "caaaa";
	string2 = "aaaab";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = " z";
	string2 = "        zzzzzzzzzzz";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaab";
	i = ft_strcmp(string1, string2);
	j = strcmp(string1, string2);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
