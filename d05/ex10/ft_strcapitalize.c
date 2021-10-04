/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/04 14:31:52 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_is_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (2);
	return (c >= 'a' && c <= 'z');
}

char	ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	char	beginning;
	char	alpha;

	beginning = 1;
	while (*str)
	{
		alpha = ft_is_alpha(*str);
		if (alpha || ft_is_numeric(*str))
		{
			if (beginning)
			{
				if (alpha == 1)
					*str += 'A' - 'a';
				beginning = 0;
			}
			else
				if (alpha == 2)
					*str += 'a' - 'A';
		}
		else
			beginning = 1;
		str++;
	}
	return (str);
}
