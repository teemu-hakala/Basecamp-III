/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 15:01:58 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calculate power power of number nb.
** Power lower than 0 returns 0.
** Overflows aren't handled.
*/

int	ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
		return (0);
	while (power-- > 0)
		result *= nb;
	return (result);
}
