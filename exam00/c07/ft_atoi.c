/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:37:05 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 11:41:28 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	coefficient;

	result = 0;
	i = 0;
	coefficient = 1;
	while (*(str + i) == ' ')
	{
		i++;
	}
	if (*(str + i) == '+')
	{
		coefficient = 1;
		i++;
	}
	else if (*(str + i) == '-')
	{
		coefficient = -1;
		i++;
	}
	while ((*(str + i) >= '0' && *(str + i) <= '9'))
	{
		if (*(str + i) == '-' && i != 0)
		{
			coefficient = -1;
		}
		else if (*(str + i) != ' ' && *(str + i) != '+')
		{
			result = 10 * result + (*(str + i) - '0');
		}
		i++;
	}
	return (coefficient * result);
}
