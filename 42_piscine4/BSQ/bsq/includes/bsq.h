/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:23:11 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/14 13:11:14 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include "utils.h"
# include <stdio.h>

int			ft_atoi(char *str, int length);
void		ft_putnbr(int nb);
void		ft_debug_map(t_map *map);
void		ft_print_map_with_square(t_map *map, t_square *bsq);
int			ft_find(char *haystack, char needle);
char		*ft_replace_buffer(int length, char *old_buffer,
				int old_buffer_size);
t_map		*ft_init_map(void);
t_map		*ft_init_map_grid(t_map *map);
void		*ft_clean_map(t_map *map, int clear_grid);
t_square	*ft_init_square(void);
t_point		*ft_init_point(void);
t_map		*ft_read_input(int fd);
t_square	*find_bsq(t_map *m);

#endif
