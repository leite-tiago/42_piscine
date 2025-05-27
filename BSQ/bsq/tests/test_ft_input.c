/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:37:25 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/14 11:42:44 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "bsq.h"

int	main(int argc, char *argv[])
{
	int		fd;
	t_map	*map;

	if (argc != 2)
	{
		printf("./main mapfile.map\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	map = ft_read_input(fd);
	if (!map)
	{
		printf("map error\n");
		return (0);
	}
	ft_debug_map(map);
	ft_clean_map(map, 1);
	close(fd);
}
