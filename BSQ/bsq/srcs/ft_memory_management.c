/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory_management.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:35:40 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/14 12:14:12 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdlib.h>

t_map	*ft_init_map(void)
{
	t_map	*map;

	map = malloc(sizeof (t_map));
	if (!map)
		return (NULL);
	map->width = 0;
	map->height = 0;
	map->map_grid = NULL;
	map->empty = '\0';
	map->obstacle = '\0';
	map->full = '\0';
	return (map);
}

t_map	*ft_init_map_grid(t_map *map)
{
	int	x;
	int	y;

	map->map_grid = malloc(map->height * sizeof (char *));
	if (!map->map_grid)
		return (NULL);
	y = -1;
	while (++y < map->height)
	{
		map->map_grid[y] = malloc(map->width * sizeof (char));
		if (!map->map_grid[y])
			return (NULL);
		x = -1;
		while (++x < map->width)
			map->map_grid[y][x] = 0;
	}
	return (map);
}

void	*ft_clean_map(t_map *map, int clear_grid)
{
	int	line;

	if (clear_grid)
	{
		line = 0;
		while (line < map->height)
			free(map->map_grid[line++]);
		free(map->map_grid);
	}
	free(map);
	return (NULL);
}

t_point	*ft_init_point(void)
{
	t_point	*point;

	point = malloc(sizeof (t_point));
	if (!point)
		return (NULL);
	point->x = 0;
	point->y = 0;
	return (point);
}

t_square	*ft_init_square(void)
{
	t_square	*square;

	square = malloc(sizeof (t_square));
	if (!square)
		return (NULL);
	square->x = 0;
	square->y = 0;
	square->length = 0;
	return (square);
}
