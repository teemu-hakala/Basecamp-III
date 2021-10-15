/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bsq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 10:30:08 by thakala           #+#    #+#             */
/*   Updated: 2021/09/08 19:55:35 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Leave the three last characters untouched even if they were numeric.
*/

int		ft_atoi_bsq(char *str)
{
	int		result;

	result = 0;
	while (str[3] && *str >= '0' && *str <= '9')
		result = 10 * result + *str++ - '0';
	return (result);
}
