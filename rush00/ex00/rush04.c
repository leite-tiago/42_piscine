/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:15:35 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/28 16:53:10 by tborges-         ###   ########.fr       */
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
			if ((r == 1 && c == 1) || (r == y && y != 1 && c == x))
				ft_putchar('A');
			else if ((r == 1 && c == x) || (r == y && y != 1 && c == 1))
				ft_putchar('C');
			else if (r == 1 || r == y)
				ft_putchar('B');
			else if (c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			++c;
		}
		ft_putchar('\n');
		++r;
	}
}
