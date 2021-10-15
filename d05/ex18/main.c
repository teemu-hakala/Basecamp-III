/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/15 12:02:34 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <bsd/string.h>
#define LEN 50

/*
** gcc -Wall -Wextra -Werror -g *.c -o ft_strlcat -lbsd
** valgrind --tool=memcheck ./ft_strlcat
*/

void			ft_putchar(char c);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

char	*ft_strcpy(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (result);
}

void	ft_putnbr_pos(unsigned int n)
{
	if (n > 9)
	{
		ft_putnbr_pos(n / 10);
		ft_putnbr_pos(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void	ft_test(char *ft_battlecry, char *battlecry, char *base, char *addition,
	int length)
{
	int		i;

	ft_strcpy(ft_battlecry, base);
	ft_putnbr_pos(ft_strlcat(ft_battlecry, addition, length));
	ft_putchar(':');
	i = 0;
	while (i < LEN)
		ft_putchar(ft_battlecry[i++]);
	ft_putchar('\n');
	ft_strcpy(battlecry, base);
	ft_putnbr_pos(strlcat(battlecry, addition, length));
	ft_putchar(':');
	i = 0;
	while (i < LEN)
		ft_putchar(battlecry[i++]);
	ft_putchar('\n');
}

/*
** gcc -Wall -Wextra -Werror ft_strlcat.c ft_putchar.c main.c -o ft_strlcat
** ./ft_strlcat | cat -e
*/

int	main(void)
{
	char	*ft_battlecry;
	char	*battlecry;
	int		i;

	ft_battlecry = (char *)malloc(sizeof(*ft_battlecry) * LEN);
	battlecry = (char *)malloc(sizeof(*battlecry) * LEN);
	i = 0;
	while (i < LEN)
	{
		ft_battlecry[i] = 0;
		battlecry[i++] = 0;
	}
	ft_test(ft_battlecry, battlecry, "Hakkapeliitta", "-sotahuuto", 20);
	ft_test(ft_battlecry, battlecry, "Hakkapeliittaa", "", 12);
	ft_test(ft_battlecry, battlecry, "Hakkapeliitta", "otuuhatos-", 13);
	ft_test(ft_battlecry, battlecry, "H", "otuuhatos-", 30);
	ft_test(ft_battlecry, battlecry, "", "", 10);
	ft_test(ft_battlecry, battlecry, "Hakka", "peliitta", 0);
	ft_test(ft_battlecry, battlecry, "Hakka", "peliitta", 14);
	free(ft_battlecry);
	free(battlecry);
}
