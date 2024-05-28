/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:50:00 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/28 16:52:00 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y && y > 0 && x > 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 || r == y) && (c == 1 || c == x))
				ft_putchar('o');
			else if (r == 1 || r == y)
				ft_putchar('-');
			else if (c == 1 || c == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			++c;
		}
		ft_putchar('\n');
		++r;
	}
}
