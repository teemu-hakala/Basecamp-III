/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:11:37 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/10 14:42:29 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strrev(char *str);

char	*ft_strcpy(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (result);
}

int	ft_strlen(char *str)
{
	int		l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	main(void)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * 10);
	str = ft_strcpy(str, "abc");
	ft_putstr(ft_strrev(str));
	write(1, "\n", 1);
	str = ft_strcpy(str, "defg");
	ft_putstr(ft_strrev(str));
	write(1, "\n", 1);
	str = ft_strcpy(str, "o");
	ft_putstr(ft_strrev(str));
	write(1, "\n", 1);
	str = ft_strcpy(str, "");
	ft_putstr(ft_strrev(str));
	write(1, "\n", 1);
	free(str);
}
