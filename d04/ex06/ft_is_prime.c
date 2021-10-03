/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/09/21 11:18:32 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		test;
	int		condition;

	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	test = 2 + 1;
	condition = test * test;
	while (condition < nb)
	{
		if (nb % test == 0)
			return (0);
		test += 2;
		condition = test * test;
		if (condition / test != test)
			return (nb % test ? 1 : 0);
	}
	return (1);
}
