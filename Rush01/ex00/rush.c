/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:08:13 by akolgano          #+#    #+#             */
/*   Updated: 2023/07/01 21:44:57 by wong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_error(void);
void	print_board(int board[4][4]);
int		check_view(int *arr, int view);
int		is_valid(int board[4][4], int *views);
int		solve(int board[4][4], int *views, int index);
void	populatezeroes(int board[4][4]);

int	main(int argc, char **argv)
{
	int	i;
	int	*views;
	int	board[4][4];

	i = 0;
	views = malloc(16 * sizeof(int));
	populatezeroes(board);
	while (i < 16)
	{
		if (argc != 2 || argv[1][2 * i] < '1' || argv[1][2 * i] > '4')
		{
			free(views);
			ft_error();
			return (0);
		}
		views[i] = argv[1][2 * i] - '0';
		i++;
	}
	if (solve(board, views, 0))
		print_board(board);
	else
		write(1, "Error\n", 6);
	free(views);
	return (0);
}

void	populatezeroes(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}
