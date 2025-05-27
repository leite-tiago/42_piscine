/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:22:50 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/14 13:57:19 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "bsq.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_parse_first_line(int fd, t_map *map)
{
	int		read_count;
	char	line[32];
	int		offset;
	int		height;

	offset = 0;
	line[0] = '\0';
	read_count = 1;
	while (read_count && (offset == 0 || line[offset - 1] != '\n')
		&& offset < 32)
		read_count = read(fd, &line[offset++], 1);
	if (!read_count || offset >= 32)
		return ;
	map->empty = line[offset - 4];
	map->obstacle = line[offset - 3];
	map->full = line[offset - 2];
	if (map->empty == map->obstacle || map->empty == map->full
		|| map->obstacle == map->full)
		return ;
	height = ft_atoi(&line[0], offset - 4);
	map->height = height;
	return ;
}

char	*ft_load_all_into_memory(int fd)
{
	char	*buffer;
	int		size;
	int		offset;
	int		read_count;
	char	*tmp;

	size = 8196;
	offset = 0;
	buffer = ft_replace_buffer(size, NULL, 0);
	if (!buffer)
		return (NULL);
	while (1)
	{
		read_count = read(fd, &buffer[offset], size - offset);
		if (read_count < size - offset)
			return (buffer);
		tmp = ft_replace_buffer(size * 2, buffer, size);
		buffer = tmp;
		if (!buffer)
			return (NULL);
		offset += read_count;
		size *= 2;
	}
	return (buffer);
}

int	ft_validate_map_data(t_map *map, char *map_data)
{
	int	offset;
	int	line;

	offset = -1;
	line = 0;
	while (map_data[++offset])
	{
		if (map_data[offset] == '\n')
		{
			if ((offset + 1) % (map->width + 1))
				return (0);
			++line;
			if (line > map->height)
				return (0);
		}
		else if (map_data[offset] != map->empty
			&& map_data[offset] != map->obstacle)
			return (0);
		else if (line >= map->height)
			return (0);
		else
			map->map_grid[line][offset % (map->width + 1)] = map_data[offset];
	}
	return (line == map->height && map_data[offset] == '\0');
}

t_map	*ft_read_input(int fd)
{
	char	*buffer;
	int		is_valid;
	int		offset;
	t_map	*map;

	map = ft_init_map();
	if (!map)
		return (NULL);
	ft_parse_first_line(fd, map);
	if (!map->height)
		return (ft_clean_map(map, 0));
	buffer = ft_load_all_into_memory(fd);
	offset = -1;
	while (buffer[++offset] != '\n')
		map->width = offset + 1;
	if (!map->width)
		return (ft_clean_map(map, 0));
	ft_init_map_grid(map);
	if (!map->map_grid)
		return (ft_clean_map(map, 0));
	is_valid = ft_validate_map_data(map, buffer);
	free(buffer);
	if (!is_valid)
		return (ft_clean_map(map, 1));
	return (map);
}
