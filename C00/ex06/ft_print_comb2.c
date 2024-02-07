/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:45:15 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/25 16:54:16 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			put_char(num1 / 10);
			put_char(num1 % 10);
			write(1, " ", 1);
			put_char(num2 / 10);
			put_char(num2 % 10);
			if (num1 != 98 || num2 != 99)
			{
				write(1, ", ", 2);
			}
			++num2;
		}
		++num1; 
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
