/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 09:17:23 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	j;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		j = 0;
		while (*str == *(to_find + j) && *str)
		{
			if (*(to_find + j + 1) == '\0')
				return (str - j);
			str++;
			j++;
		}
		str++;
	}
	return (0);
}
