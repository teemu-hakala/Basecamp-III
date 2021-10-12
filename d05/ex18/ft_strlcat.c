/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/10/12 10:59:39 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		destlen;
	int					max;
	unsigned int		srclen;

	destlen = 0;
	while (dest[destlen] && destlen < size)
		destlen++;
	max = size - destlen - 1;
	srclen = 0;
	if (max >= 0)
	{
		while (src[srclen] && srclen < (unsigned int) max)
			dest[destlen++] = src[srclen++];
		dest[destlen] = '\0';
	}
	while (src[srclen++])
		destlen++;
	return (destlen);
}
