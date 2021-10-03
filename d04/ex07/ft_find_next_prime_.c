/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/08/21 07:37:55 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		test;

	test = 3;
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (test < nb / 2)
	{
		if (nb % test == 0)
		{
			test = 3;
			nb += 2;
		}
		else
			test += 2;
	}
	return (nb);
}
