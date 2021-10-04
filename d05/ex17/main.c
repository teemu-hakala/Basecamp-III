/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 19:17:42 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_strncat(char *dest, char *src, int nb);

int	main(void)
{
	char	battlecry[50] = "Hakkapeliitta";
	int		i;

	ft_strncat(battlecry, ". Pohjan pojat.", 10);
	i = 0;
	while (i < 50)
		ft_putchar(battlecry[i++]);
}
