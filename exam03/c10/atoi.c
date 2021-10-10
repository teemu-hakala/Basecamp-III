/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:45:53 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/10 14:49:44 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		result;
	int		coefficient;

	result = 0;
	coefficient = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		coefficient = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = 10 * result + str++ - '0';
	}
	return (coefficient * result);
}
