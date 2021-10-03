/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:51:08 by thakala           #+#    #+#             */
/*   Updated: 2021/09/25 11:22:29 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Place the first queen on the board (loop through the board).
** Mark all the spots as taken where the first queen attacks.
** Place the next queen on the board left after the first queen.
** Until the nth queen which can't be placed or the 8th queen
** which can be placed.
** Because the first queen is always placed further and further on
** the board there will never be two of the same configurations in this
** sequence.
*/

#define QUEEN 'Q' - '0'

void	ft_putchar(char character);

void	ft_board_nuller(char *chessboard);

int		ft_board_filler(char last_move[2], char origin[2], char *chessboard,
	int queen_count);

int		ft_eight_queens_puzzle(void)
{
	int		possibilities;
	char	chessboard[8][8];
	char	pt0[2];
	char	pt1[2];
	int		result;

	*pt0 = 0; //2;
	*(pt0 + 1) = 0; //3;
	*pt1 = 0; //2;
	*(pt1 + 1) = 0; //3;
	ft_board_nuller((char *)chessboard);
	possibilities = 0;
	while (*(pt1 + 1) * 8 + *pt1 < 64)
	{
		*(*(chessboard + *(pt1 + 1)) + *pt1) = QUEEN;
		result = ft_board_filler(pt0, pt1, (char *)chessboard, 1);
		possibilities += result;
		if (result)
			ft_board_nuller((char *)chessboard);
		*pt1 = *pt1 + 1;
		*(pt1 + 1) += *pt1 / 8; // ?
		*pt1 %= 8;
	}
	return (possibilities);
}

void	ft_board_nuller(char *chessboard)
{
	int		j_rows;
	int		i_cols;

	j_rows = 0;
	while (j_rows < 8)
	{
		i_cols = 0;
		while (i_cols < 8)
		{
			*((chessboard + j_rows * 8) + i_cols) = 0;
			i_cols++;
		}
		j_rows++;
	}
}

void	ft_print_chessboard(char *chessboard)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j < 8)
	{
		ft_putchar('0' + j);
		ft_putchar(':');
		while (i < 8)
			ft_putchar('0' + *(chessboard + 8 * j + i++));
		ft_putchar('\n');
		i = 0;
		j++;
	}
	ft_putchar('\n');
}

/*
** Don't change the QUEEN itself. (Even though the algorithm should prevent it.)
*/

void	ft_update_rows(char *chessboard, int i, int j, int addition)
{
	while (++i < 8)
		if (*(chessboard + j * 8 + i) != QUEEN)
			*(chessboard + j * 8 + i) += addition;
}

void	ft_update_columns(char *chessboard, int i, int j, int addition)
{
	while (++j < 8)
		if (*(chessboard + j * 8 + i) != QUEEN)
			*(chessboard + j * 8 + i) += addition;
}

int		ft_update_square_truth(int n, int sign, int skip, int change)
{
	if ((sign == -1 && n + -skip * change < 0) ||
		(sign == 1 && n + skip * change >= 8 * 8))
		return (0);
	return (1);
}

/*
** skip: 9 -> Top-left bottom-right diagonal.
** skip: 7 -> Top-right bottom-left diagonal.
*/

void	ft_update_diagonal(char *chessboard, char last_move[2],
	int skip, int addition)
{
	int		n;
	int		row_previous;
	int		row;
	int		change;
	int		sign;

	n = last_move[1] * 8 + last_move[0];
	row_previous = last_move[1];
	change = 1;
	sign = -1;
	while (n + -skip * change >= 0 || n + skip * change < 8 * 8)
	{
		if (ft_update_square_truth(n, sign, skip, change))
		{
			row = (n + sign * skip * change) / 8;
			if (row == row_previous + sign * 1)
				if (*(chessboard + (n + sign * skip * change)) != QUEEN)
					*(chessboard + (n + sign * skip * change)) += addition;
			//ft_print_chessboard(chessboard);
			//ft_putchar('\n');
		}
		sign *= -1;
		if (sign == -1)
			change++;
		row_previous = n / 8 + sign * change - sign;
	}
}

void	ft_update_diagonals(char *chessboard, char last_move[2], int addition)
{
	ft_update_diagonal(chessboard, last_move, 9, addition);
	ft_update_diagonal(chessboard, last_move, 7, addition);
}

void	ft_update_chessboard(char *chessboard, char move[2], int addition)
{
	ft_update_rows(chessboard, -1, move[1], addition);
	ft_update_columns(chessboard, move[0], -1, addition);
	ft_update_diagonals(chessboard, move, addition);
	if (addition < 0)
		*(chessboard + *(move + 1) * 8 + *move) = 0;
	ft_print_chessboard(chessboard);
}

/*
** Fill the horizontal, diagonal and vertical directions with 1s.
** The Queen is marked with 2.
** Check whether the chessboard has been filled (all 1s).
** If the number of queens is 8, return 1 to add 1 to the count (?).
** ->Solution requires:
** Backtracking or clever math trick to track the queen's squares of influence.
** Queens are -1 or Q? Attacked squares are from 1 to 8?
** Reverse the process of marking down the attacked squares each time.
*/

int		ft_board_filler(char last_move[2], char origin[2], char *chessboard,
	int queen_count)
{
	int		n;
	char	next_move[2];
	int		removed;

	removed = 0;
	n = origin[1] * 8 + origin[0]; // ?
	ft_update_chessboard(chessboard, last_move, 1);
	while (n < 64)
	{
		n = last_move[1] * 8 + last_move[0] + 1; // ?
		while ((*(chessboard + n) >= 1 || *(chessboard + n) == QUEEN) && n < 64)
			n++;
		//ft_update_chessboard(chessboard, next_move, 1);
		if (n < 64)
		{
			*next_move = n % 8;
			*(next_move + 1) = n / 8;
			*(chessboard + *(next_move + 1) * 8 + *next_move) = QUEEN;
			if (ft_board_filler(next_move, origin, chessboard, queen_count + 1))
				return (1);
			else if (*(chessboard + n) == QUEEN) // purkkaratkaisu?
			{
				ft_update_chessboard(chessboard, last_move, -1);
				queen_count--;
			}
		}
		else if (queen_count != 8 && !removed) // ?
		{
			ft_update_chessboard(chessboard, last_move, -1);
			queen_count--;
			removed++;
			n = last_move[1] * 8 + last_move[0] + 1;
		}
		//if (queen_count == 8);
		//	return (1);
	}
	return (queen_count == 8);
}
