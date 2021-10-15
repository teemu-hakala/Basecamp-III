/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:55:51 by thakala           #+#    #+#             */
/*   Updated: 2021/09/08 14:56:11 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int			ft_read_error(void)
{
	ft_putstr("File read error.\n", STDERR_FILENO);
	return (0);
}

int			ft_open_error(void)
{
	ft_putstr("File open error.\n", STDERR_FILENO);
	return (0);
}

int			ft_malloc_error(void)
{
	ft_putstr("Mallocation error.\n", STDERR_FILENO);
	return (0);
}

int			ft_map_key_error(void)
{
	ft_putstr("Map key error.\n", STDERR_FILENO);
	return (0);
}

int			ft_map_line_error(void)
{
	ft_putstr("Map line error.\n", STDERR_FILENO);
	return (0);
}
