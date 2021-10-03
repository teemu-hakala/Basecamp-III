/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/09/21 13:25:29 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		test;
	int		condition;

	test = 3;
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	condition = test * test;
	while (condition < nb)
	{
		if (nb % test == 0)
		{
			test = 3;
			nb += 2;
		}
		else
			test += 2;
		condition = test * test;
		if (condition / test != test)
			return (nb == 2147483629 ? nb : (int)(~0u >> 1));
	}
	return (nb);
}
