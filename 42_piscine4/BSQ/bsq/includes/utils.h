/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:07:20 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/14 12:24:56 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <fcntl.h>

# define TRUE 1
# define FALSE 0

typedef struct s_point
{
	int		x;
	int		y;
}			t_point;

typedef struct s_map
{
	int		width;
	int		height;
	char	**map_grid;
	char	empty;
	char	obstacle;
	char	full;
}			t_map;

typedef struct s_square
{
	int		x;
	int		y;
	int		length;
}			t_square;

#endif
