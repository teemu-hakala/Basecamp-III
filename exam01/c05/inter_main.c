/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:04:10 by teemuhakala       #+#    #+#             */
/*   Updated: 2021/10/12 12:13:22 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	inter_main(int argc, char **argv)
{
	char	*root;
	char	*pile;
	// Reserve a table, which holds all character values (from -128 through 0 upto 127):
	char	*table[256];
	int		i;

	// Overwrite the character array with null terminator:
	i = 0;
	while (i < 256)
		table[i++] = '\0';
	// If argv is not a null pointer, if argc is exactly 2, if argv[1] and argv[0] are not null pointers, go ahead.
	if (argv && argc-- == 2 && argv[1] && argv[0])
	{
		// Look up root's characters in pile
		pile = argv[argc--];
		root = argv[argc];

		// As long as root has characters left (root doesn't point to null terminator):
		while (*root)
		{
			// As long as pile has characters left:
			i = 0;
			while (pile[i])
			{
				// If pile character has not yet been seen and it mathces root character, display it and mark it to table and end inner loop:
				if (!table[pile[i] + 128] && pile[i] == *root)
				{
					write(1, &pile[i], 1);
					table[pile[i] + 128] = 1;
					break ;
				}
				// Next pile character
				i++;
			}
			// If root will reach its end on the next loop, break from the outer loop:
			if (!root[i + 1])
				break ;
			// Even if the root character was not found, mark it on the table to not search for it again.
			table[*root + 128] = 1;
			// Grow root until a new character other than null terminator is seen:
			while (table[*root + 128] && *root)
				root++;
		}
	}
	write(1, "\n", 1);
}
