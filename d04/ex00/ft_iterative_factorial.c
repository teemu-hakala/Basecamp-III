/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 14:54:33 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		factorial;

	factorial = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		while (++nb <= -1)
			factorial *= nb;
	else
		while (--nb >= 1)
			factorial *= nb;
	return (factorial);
}
