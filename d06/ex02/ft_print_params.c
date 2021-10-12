/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/08/25 13:55:41 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

int		main(int argc, char **argv)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (argc <= 0)
		return (0);
	while (++i < argc)
	{
		while (argv[i][n] != '\0')
			ft_putchar(argv[i][n++]);
		ft_putchar('\n');
		n = 0;
	}
	return (0);
}
