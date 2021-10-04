/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:43:41 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/09/13 16:45:44 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		counter;
	char	swap;

	len = 0;
	while (str[len])
		len++;
	counter = 0;
	while (counter < len/2)
	{
		swap = str[counter];
		str[counter] = str[len - counter - 1];
		str[len - counter++ - 1] = swap;
	}
	return (str);
}
