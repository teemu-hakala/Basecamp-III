/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/08/24 17:53:36 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putchar(char character);

void	ft_putstr(char *str);

void	ft_putnbr(int number);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char	*string1;
	char	*string2;
	int		i;
	int		j;
	int		n = 4;

	string1 = "aaaaa";
	string2 = "aaaab";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');

	string1 = "aaaaz";
	string2 = "aaaa";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaa";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaza";
	string2 = "aaaab";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaaz";
	string2 = "aaaab";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaab";
	string2 = "aaaab";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaab";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaaz";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "baaaa";
	string2 = "aaaab";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "ffaaa";
	string2 = "aaaab";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "caaaa";
	string2 = "aaaab";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = " z";
	string2 = "        zzzzzzzzzzz";
	n = 4;
	ft_putnbr(ft_strncmp(string1, string2, n) == strncmp(string1, string2, n));
	ft_putchar('\n');
	ft_putchar('\n');

	string1 = "aaaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaaaz";
	string2 = "aaaab";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaabz";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaza";
	string2 = "aaaab";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaaz";
	string2 = "aaaab";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaab";
	string2 = "aaaab";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaaz";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "baaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "ffaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = "caaaa";
	string2 = "aaaab";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	string1 = " z";
	string2 = "        zzzzzzzzzzz";
	ft_putnbr(ft_strncmp(string1, string2, n));
	ft_putchar(' ');
	ft_putnbr(strncmp(string1, string2, n));
	ft_putchar('\n');
	ft_putchar('\n');


	string1 = "aaaaa";
	string2 = "aaaab";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaaz";
	string2 = "aaaab";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaabz";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaza";
	string2 = "aaaab";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaz";
	string2 = "aaaab";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaab";
	string2 = "aaaab";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaab";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaaz";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "baaaa";
	string2 = "aaaab";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "ffaaa";
	string2 = "aaaab";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "caaaa";
	string2 = "aaaab";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = " z";
	string2 = "     zzzzzzzzzzz";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	string1 = "aaaaa";
	string2 = "aaaab";
	i = ft_strncmp(string1, string2, n);
	j = strncmp(string1, string2, n);
	if (i == j || (i > 0 && j > 0) || (i == 0 && j == 0) || (i < 0 && j < 0))
		ft_putnbr(1);
	else
		ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
