/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:42:45 by thakala           #+#    #+#             */
/*   Updated: 2021/08/25 03:32:58 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void	ft_putchar(char character);

void	ft_putnbr(int number);

int		ft_atoi(char *str);

int		main(void)
{
	//ft_putnbr(ft_atoi("  - 33")); //prints out a random value close to 32k with ft_putnbr()
	ft_putnbr(ft_atoi("  - 33"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("  - 33"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("   -  33"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" ++33"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" -+33"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" -+ 33"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" +-33"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" -+ 33"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" -+33"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" -+ 000000000033000"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" -000000+00033000"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" -24a33"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" -000000000024000"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" -000000000024000"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" +42a33"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" +42e4"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" +42E4"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\f42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\n42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\r42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\t42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\v42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("   +42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("+42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("55"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(" 42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("  42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("                         42"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("  -24"));
	/*int i = 0;
	while (c <= 127 && i <= 256)
	{
		printf("%c: %d\n", c, isspace(c));
		c++;
		i++;
	}*/
	ft_putnbr(atoi("-234") == ft_atoi("-234"));
    ft_putnbr(atoi("234a") == ft_atoi("234a"));
    ft_putnbr(atoi("234-") == ft_atoi("234-"));
    ft_putnbr(atoi("1998") == ft_atoi("1998"));
    ft_putnbr(atoi("19 98") == ft_atoi("19 98"));
    ft_putnbr(atoi(" 0") == ft_atoi(" 0"));
    ft_putnbr(atoi("-0") == ft_atoi("-0"));
	ft_putnbr(atoi("+99") == ft_atoi("+99"));
    ft_putnbr(atoi(" 1000000") == ft_atoi(" 1000000"));
    ft_putnbr(atoi(" 709551615") == ft_atoi(" 709551615"));
    ft_putnbr(atoi("2147483647") == ft_atoi("2147483647"));
    ft_putnbr(atoi("-2147483648") == ft_atoi("-2147483648"));
    ft_putnbr(atoi("-2147483649") == ft_atoi("-2147483649"));
    ft_putnbr(atoi("21474836490") == ft_atoi("21474836490"));
    ft_putnbr(atoi("-214748b648") == ft_atoi("-214748b648"));
    ft_putnbr(atoi("\n12345") == ft_atoi("\n12345"));
    ft_putnbr(atoi("\t12345") == ft_atoi("\t12345"));
    ft_putnbr(atoi(" \t\n12345") == ft_atoi(" \t\n12345"));
    ft_putnbr(atoi("- \t\n12345") == ft_atoi("- \t\n12345"));
    ft_putnbr(atoi("+ \t\n12345") == ft_atoi("+ \t\n12345"));
    ft_putnbr(atoi("+- \t\n12345") == ft_atoi("+- \t\n12345"));
    ft_putnbr(atoi("-+ \t\n12345") == ft_atoi("-+ \t\n12345"));
    ft_putnbr(atoi(" \t\n-12345") == ft_atoi(" \t\n-12345"));
    ft_putnbr(atoi(" \t\n+12345") == ft_atoi(" \t\n+12345"));
    ft_putnbr(atoi(" \t\n-+12345") == ft_atoi(" \t\n-+12345"));
    ft_putnbr(atoi(" \t\n+-12345") == ft_atoi(" \t\n+-12345"));
    ft_putnbr(atoi("ab \t\n+-12345") == ft_atoi("ab \t\n+-12345"));
    ft_putnbr(atoi(" \t\nab-12345") == ft_atoi(" \t\nab-12345"));
    ft_putnbr(atoi(" \t\na12345") == ft_atoi(" \t\na12345"));
    ft_putnbr(atoi(" \r\t\n12345") == ft_atoi(" \r\t\n12345"));
    ft_putnbr(atoi(" \r\t\n\v12345") == ft_atoi(" \r\t\n\v12345"));
    ft_putnbr(atoi(" \r\t\n\v\f12345") == ft_atoi(" \r\t\n\v\f12345"));
    ft_putnbr(atoi("12 345") == ft_atoi("12 345"));
    ft_putnbr(atoi("a12345") == ft_atoi("a12345"));
    ft_putnbr(atoi("12345a") == ft_atoi("12345a"));
	return (0);
}
