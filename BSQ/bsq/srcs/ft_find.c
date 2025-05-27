/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:53:01 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/14 13:13:39 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "bsq.h"

int	expand(int x, int y, t_map *m)
{
	int		len;
	int		aux;
	char	empty;

	if (m->map_grid[y][x] != m->empty)
		return (-1);
	len = 1;
	empty = m->empty;
	while (x + len < m->width && y + len < m->height)
	{
		aux = -1;
		while (++aux <= len)
		{
			if (m->map_grid[y + len][x + aux] != empty)
				return (len - 1);
		}
		while (--aux >= 0)
		{
			if (m->map_grid[y + aux][x + len] != empty)
				return (len - 1);
		}
		++len;
	}
	return (len - 1);
}

t_square	*find_bsq(t_map *m)
{
	int			len;
	int			x;
	int			y;
	t_square	*bsq;

	bsq = ft_init_square();
	if (!bsq)
		return (NULL);
	y = -1;
	while (++y < m->height && y + bsq->length < m->height)
	{
		x = -1;
		while (++x < m->width && x + bsq->length < m->width)
		{
			len = expand(x, y, m);
			if (len > bsq->length)
			{
				bsq->length = len;
				bsq->x = x;
				bsq->y = y;
			}
		}
	}
	return (bsq);
}
