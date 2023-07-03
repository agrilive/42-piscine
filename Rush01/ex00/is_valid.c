/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:08:13 by akolgano          #+#    #+#             */
/*   Updated: 2023/07/01 21:40:52 by wong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view(int *arr, int view);

void	getrolcol(int ij[2], int board[4][4], int row[4], int col[4])
{
	while (ij[1] < 4)
	{
		row[ij[1]] = board[ij[0]][ij[1]];
		col[ij[1]] = board[ij[1]][ij[0]];
		ij[1]++;
	}
}

void	reverserolcol(int ij[2], int board[4][4], int row[4], int col[4])
{
	while (ij[1] >= 0)
	{
		row[3 - ij[1]] = board[ij[0]][ij[1]];
		col[3 - ij[1]] = board[ij[1]][ij[0]];
		ij[1]--;
	}
}

int	is_valid(int board[4][4], int *views)
{
	int	row[4];
	int	col[4];
	int	i;
	int	ij[2];

	i = 0;
	while (i < 4)
	{
		ij[0] = i;
		ij[1] = 0;
		getrolcol(ij, board, row, col);
		if (!check_view(row, views[i + 8]) || !check_view(col, views[i]))
			return (0);
		ij[1] = 3;
		reverserolcol(ij, board, row, col);
		if (!check_view(row, views[i + 12]) || !check_view(col, views[i + 4]))
			return (0);
		i++;
	}
	return (1);
}
