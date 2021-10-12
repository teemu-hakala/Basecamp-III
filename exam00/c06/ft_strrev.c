/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:34:47 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 11:36:52 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		length;
	int		i;
	char	swap;

	length = 0;
	i = 0;
	while (*(str + i) != '\0')
		i++;
	length = i;
	while (i > length / 2)
	{
		swap = *(str + length - i);
		*(str + (length - i)) = *(str + (i - 1));
		*(str + (i-- - 1)) = swap;
	}
	return (str);
}
