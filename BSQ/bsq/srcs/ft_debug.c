/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:27:41 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/14 13:19:05 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"
#include "bsq.h"

void	ft_debug_map_header(t_map *map)
{
	ft_putnbr(map->height);
	write(1, &map->empty, 1);
	write(1, &map->obstacle, 1);
	write(1, &map->full, 1);
	write(1, "\n", 1);
}

void	ft_print_map_row(t_map *map, int y)
{
	write(1, map->map_grid[y], map->width);
	write(1, "\n", 1);
}

void	ft_debug_map_grid(t_map *map)
{
	int	y;

	y = -1;
	while (++y < map->height)
		ft_print_map_row(map, y);
}

void	ft_debug_map(t_map *map)
{
	ft_debug_map_header(map);
	if (map->map_grid)
		ft_debug_map_grid(map);
}

void	ft_print_map_with_square(t_map *map, t_square *bsq)
{
	int	y;
	int	counter;

	y = -1;
	while (++y < bsq->y)
		ft_print_map_row(map, y);
	--y;
	while (++y <= bsq->y + bsq->length)
	{
		write(1, map->map_grid[y], bsq->x);
		counter = -1;
		while (++counter <= bsq->length)
			write(1, &map->full, 1);
		write(1,
			&map->map_grid[y][bsq->x + bsq->length + 1],
			map->width - bsq->x - bsq->length - 1);
		write(1, "\n", 1);
	}
	--y;
	while (++y < map->height)
		ft_print_map_row(map, y);
}
