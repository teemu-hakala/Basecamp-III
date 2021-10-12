/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:52:07 by thakala           #+#    #+#             */
/*   Updated: 2021/09/01 16:25:49 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/d12.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	write(1, str, i);
}
