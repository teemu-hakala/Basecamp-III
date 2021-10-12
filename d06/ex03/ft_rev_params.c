/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/08/25 14:04:09 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (--argc > 0)
	{
		while (argv[argc][i] != '\0')
			ft_putchar(argv[argc][i++]);
		ft_putchar('\n');
		i = 0;
	}
}