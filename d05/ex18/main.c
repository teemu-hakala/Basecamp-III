/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 19:34:56 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	battlecry[50] = "Hakkapeliitta";
	int		i;

	ft_strlcat(battlecry, "-sotahuuto", 20);
	i = 0;
	while (i < 50)
		ft_putchar(battlecry[i++]);
}
