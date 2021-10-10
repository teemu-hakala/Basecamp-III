/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:54:07 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/10 14:28:41 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	*start;
	char	*end;

	start = str;
	end = str;
	while (*end)
		end++;
	while (start < --end)
	{
		*start ^= *end;
		*end ^= *start;
		*start++ ^= *end;
	}
	return (str);
}
