/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/05 08:27:11 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putchar(char c);

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	battlecry[50] = "The Meaning \0f Life";
	int		i;

	i = 0;
	while (i < 50)
		ft_putchar(battlecry[i++]);
	ft_putchar('\n');
	ft_strcat(battlecry, "ehT gninaeM f\0 efiL");
	i = 0;
	while (i < 50)
		ft_putchar(battlecry[i++]);
	ft_putchar('\n');
	char string1[70] = "sun";
//	char string1[25];
	char string2[] = " dance " ;
	printf(" strcat:%s\n", strcat(string1, string2));
	printf(" ft_strcat:%s\n", ft_strcat(string1, string2));
}
