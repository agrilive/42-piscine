/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:08:13 by akolgano          #+#    #+#             */
/*   Updated: 2023/07/01 21:48:07 by wong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int board[4][4], int *views);

int	can_place(int board[4][4], int row, int col, int height)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == height || board[i][col] == height)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int board[4][4], int *views, int index)
{
	int	row;
	int	col;
	int	height;

	row = index / 4;
	col = index % 4;
	height = 1;
	if (index == 16)
		return (is_valid(board, views));
	while (height <= 4)
	{
		if (can_place(board, row, col, height))
		{
			board[row][col] = height;
			if (solve(board, views, index + 1))
				return (1);
		}
		height++;
	}
	board[row][col] = 0;
	return (0);
}
