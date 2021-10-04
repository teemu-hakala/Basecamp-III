/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 09:16:33 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putchar(char character);

void	ft_putstr(char *str);

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char	haystack1[] = "SaippuakauppiassaippuakauppiaS";
	char	haystack2[] = "anagrammipalindromi";
	char	haystack3[] = "anagrammi";

	ft_putstr(ft_strstr(haystack1, "aka"));
	ft_putchar('\n');
	ft_putstr(ft_strstr(haystack2, "ndr"));
	ft_putchar('\n');
	ft_putstr(ft_strstr(haystack3, ""));
	ft_putchar('\n');
	ft_putstr("intermediary line #0");
	ft_putchar('\n');
	ft_putstr(strstr(haystack3, ""));
	ft_putchar('\n');
	int i = 0;
	while (*(haystack3 + i) != '\0')
		ft_putchar(*(haystack3 + i++));
	ft_putchar('\n');
	if (ft_strstr(haystack3, "") == strstr(haystack3, ""))
		ft_putstr("correct!");
	else
		ft_putstr("incorrect.");
	ft_putchar('\n');
	ft_putstr("intermediary line #1");
	ft_putchar('\n');
	ft_putstr(strstr("anything", ""));
	ft_putchar('\n');
	i = 0;
	while (*(haystack3 + i) != '\0')
		ft_putchar(*(haystack3 + i++));
	ft_putchar('\n');
	return (0);
}
