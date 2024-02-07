/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:24:28 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/04 12:49:10 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_double(int board[4][4], int pos, int num)
{
	int i;

	i = -1;
	while (++i < pos / 4)
		if (board[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (board[pos / 4][i] == num)
			return (1);
	return (0);
}

int check_col_up(int board[4][4], int pos, int povs[16])
{
	int i;
	int max_size;
	int visible_towers;

	i = 0;
	max_size = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (board[i][pos % 4] > max_size)
			{
				max_size = board[i][pos % 4];
				visible_towers++;
			}
			i++;
		}
		if (povs[pos % 4] != visible_towers)
			return (1);
	}
	return (0);
}

int check_col_down(int board[4][4], int pos, int povs[16])
{
	int i;
	int max_size;
	int visible_towers;

	i = 3;
	max_size = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (board[i][pos % 4] > max_size)
			{
				max_size = board[i][pos % 4];
				visible_towers++;
			}
			i--;
		}
		if (povs[4 + pos % 4] != visible_towers)
			return (1);
	}
	return (0);
}

int check_row_left(int board[4][4], int pos, int povs[16])
{
	int i;
	int max_size;
	int visible_towers;

	i = 0;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (board[pos / 4][i] > max_size)
			{
				max_size = board[pos / 4][i];
				visible_towers++;
			}
			i++;
		}
		if (povs[8 + pos / 4] != visible_towers)
			return (1);
	}
	return (0);
}

int check_row_right(int board[4][4], int pos, int povs[16])
{
	int i;
	int max_size_size;
	int visible_towers;

	i = 4;
	max_size_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (board[pos / 4][i] > max_size_size)
			{
				max_size_size = board[pos / 4][i];
				visible_towers++;
			}
		}
		if (povs[12 + pos / 4] != visible_towers)
			return (1);
	}
	return (0);
}

int check_case(int board[4][4], int pos, int povs[16])
{
    if (check_col_up(board, pos, povs) == 1)
		return (1);
    if (check_col_down(board, pos, povs) == 1)
		return (1);
	if (check_row_left(board, pos, povs) == 1)
		return (1);
	if (check_row_right(board, pos, povs) == 1)
		return (1);
	return (0);
}
