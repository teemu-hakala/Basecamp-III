/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:54:07 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/10 14:26:35 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	*start;
	char	*result;

	start = str;
	result = str;
	while (*str)
		str++;
	while (start < --str)
	{
		*start ^= *str;
		*str ^= *start;
		*start++ ^= *str;
	}
	return (result);
}
