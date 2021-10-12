/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:42:04 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 11:45:58 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	epur_str_main(int argc, char **argv)
{
	char	newline;
	char	delimiter;
	char	*string;
	char	inside;
	char	start;
	int		i;

	newline = '\n';
	delimiter = ' ';
	inside = 0;
	start = 1;
	i = 0;
	if (argc != 1)
	{
		write(1, &newline, 1);
		return (0);
	}
	string = *argv;
	while (*(string + i) != '\0')
	{
		while (*(string + i) == ' ' || *(string + i) == '\t')
		{
			i++;
			inside = 1;
		}
		if (*(string + i) != '\0')
		{
			if (inside == 1 && start == 0)
			{
				write(1, &delimiter, 1);
				inside = 0;
			}
			start = 0;
			inside = 0;
			write (1, string + i, 1);
			i++;
		}
	}
	write (1, &newline, 1);
	return (0);
}
