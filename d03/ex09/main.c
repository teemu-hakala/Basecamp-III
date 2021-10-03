/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:10 by thakala           #+#    #+#             */
/*   Updated: 2021/10/03 19:37:26 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define LENGTH 10

void	ft_sort_integer_table(int *tab, int size);

int	main(void)
{
	int		i;
	int		array[LENGTH] = {-1, 2, 0, 9, 5, -10, 75, -65, -65, 37};

	ft_sort_integer_table(array, LENGTH);
	i = 0;
	while (i < LENGTH)
		printf("%d\n", array[i++]);
}
