/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:50:59 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/04 10:49:32 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
void ft_putnbr(int nb);
void ft_putchar(char c);
void ft_putstr(char *str);
int ft_atoi(char *str);
int ft_strlen(char *str);

int *get_numbers_args(char *str);
int check_args(int argc, char **argv);
int check_double(int board[4][4], int pos, int num);
int check_case(int board[4][4], int pos, int povs[16]);

int solve(int board[4][4], int povs[16], int pos)
{
	int size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		//checking if the number I want to place is correct
		if (check_double(board, pos, size) == 0)
		{
			board[pos / 4][pos % 4] = size;
			//checking if the board is correct with the new number
			if (check_case(board, pos, povs) == 0)
			{
				//checking for next possibility
				if (solve(board, povs, pos + 1) == 1)
					return (1);
			}
			else
				board[pos / 4][pos % 4] = 0;
		}
	}
	//did not find any solutions
	return (0);
}

void	display_result(int board[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(board[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int	board[4][4] = {
                {0, 0, 0, 0}, 
                {0, 0, 0, 0}, 
                {0, 0, 0, 0}, 
                {0, 0, 0, 0}};
	int	*povs;

	if (check_args(argc, argv) == 0)
	{
		ft_putstr("Error");
		return (0);
	}
	povs = get_numbers_args(argv[1]);
	if (solve(board, povs, 0) == 1)
	{
		display_result(board);
	}
	else
	{
		ft_putstr("Error");
		return (0);
	}
}
