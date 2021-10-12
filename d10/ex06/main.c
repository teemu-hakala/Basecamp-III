/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/08/31 16:51:27 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(int argc, char *argv)
{
	if (argc != 4)
		return (0);
	if (!ft_validate_input(argv + 1))
		return (0);
	return (0);
}
