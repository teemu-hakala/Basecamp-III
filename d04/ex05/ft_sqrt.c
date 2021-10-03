/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 15:09:24 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SQRT_MAX 46340

int	binary_search_double(int nb)
{
	int		sqrt;
	int		x;

	sqrt = 2;
	while (sqrt < SQRT_MAX && sqrt * sqrt < nb)
	{
		sqrt *= 2;
		x = sqrt * sqrt;
		if (x / sqrt != sqrt)
			sqrt = SQRT_MAX;
	}
	return (sqrt);
}

int	binary_search_split(int nb, int sqrt)
{
	int		addition;
	int		halver;
	int		sign;

	addition = sqrt / 2;
	halver = 1;
	sign = -1;
	while (addition > 0)
	{
		sqrt = sqrt + sign * addition;
		if (sqrt * sqrt < nb)
			sign = 1;
		else if (sqrt * sqrt == nb)
			return (sqrt);
		else
			sign = -1;
		addition /= 2;
		halver *= (addition % 2 && addition > 1) ? -1 : 1;
		addition = addition % 2 && addition > 1 && halver == 1
			? addition + 1 : addition;
	}
	return (sqrt);
}

int	linear_search(int nb, int sqrt)
{
	int		sign;

	sign = sqrt * sqrt < nb ? 1 : -1;
	while (sign * sqrt * sqrt < sign * nb)
		sqrt += sign;
	return (sqrt);
}

int	ft_sqrt(int nb)
{
	int		sqrt;

	if (nb < 0)
		return (0);
	sqrt = binary_search_double(nb);
	if (sqrt * sqrt != nb)
		sqrt = binary_search_split(nb, sqrt);
	if (sqrt * sqrt != nb)
		sqrt = linear_search(nb, sqrt);
	if (sqrt * sqrt != nb)
		return (sqrt);
	return (sqrt);
}
