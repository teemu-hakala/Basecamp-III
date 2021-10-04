/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 19:44:37 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

char	*ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	battlecry[50] = "Hakkapeliitta";
	int		i;

	ft_strlcpy(battlecry, "123456789", 4);
	i = 0;
	while (i < 50)
		ft_putchar(battlecry[i++]);
}
