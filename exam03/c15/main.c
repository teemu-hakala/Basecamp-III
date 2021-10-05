/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:35:33 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/05 09:23:34 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_alpha_main(int argc, char **argv);

int	main(void)
{
	char	*argv0 = {"the alphabet"};
	char	*argv1 = {"My Hyze 47y 7."};
	char	*argv2 = {" "};

	count_alpha_main(1, &argv0);
	count_alpha_main(1, &argv1);
	count_alpha_main(1, &argv2);
}
