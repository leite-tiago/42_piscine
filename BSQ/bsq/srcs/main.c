/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:19:12 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/14 13:00:08 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "utils.h"
#include <stdlib.h>

void	_solve(int fd)
{
	t_map		*map;
	t_square	*bsq;

	map = ft_read_input(fd);
	if (!map)
	{
		write(2, "map error\n", 10);
		return ;
	}
	bsq = find_bsq(map);
	ft_print_map_with_square(map, bsq);
	free(bsq);
	ft_clean_map(map, 1);
}

void	read_from_input(void)
{
	_solve(0);
}

void	read_from_file(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	_solve(fd);
	close(fd);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		read_from_input();
	else
	{
		while (i < argc)
		{
			read_from_file(argv[i]);
			++i;
		}
	}
}
