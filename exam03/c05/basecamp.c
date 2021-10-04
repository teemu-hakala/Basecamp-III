/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basecamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:31:05 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/09/13 16:35:47 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_pos_number(int n)
{
	char	number;
	
	if (n < 0)
		return ;
	if (n <= 9)
	{
		number = '0' + n;
		write(1, &number, 1);
	}
	else
	{
		ft_put_pos_number(n / 10);
		ft_put_pos_number(n % 10);
	}
}

void	basecamp(void)
{
	int		ft;
	int		three;

	ft = 1;
	three = 101;
	while (ft < three)
	{
		if (ft % 3 == 0 && ft % 5 == 0)
		{
			write(1, "basecamp", 8);
		}
		else if (ft % 3 == 0)
		{
			write(1, "base", 4);
		}
		else if (ft % 5 == 0)
		{
			write(1, "camp", 4);
		}
		else
		{
			ft_put_pos_number(ft);
		}
		write(1, "\n", 1);
		ft++;
	}
}
