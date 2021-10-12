/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/08/31 17:04:39 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *datum)
{
	int 	result;
	int		coefficient;

	coefficient = 1;
	while (*datum == ' ' || *datum == '\f' || *datum == '\n' ||
			*datum == '\r' || *datum == '\t' || *datum == '\v')
		datum++;
	if (*datum == '+' || *datum == '-')
	{
		if (*datum == '-')
			coefficient = -1;
		datum++;
	}
	while (*datum >= '0' && *datum <= '9')
		result = 10 * result + *datum++ - '0';
	return (result);
}