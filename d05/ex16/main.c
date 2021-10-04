/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 19:07:49 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

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
}
