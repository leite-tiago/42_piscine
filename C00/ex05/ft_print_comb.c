/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:23:07 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/25 12:43:59 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	number[1] = '0'; 
	number[2] = '0';
	while (number[0] <= '7')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '8')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				write(1, &number[0], 3);
				if (number[0] != '7' || number[1] != '8' || number[2] != '9')
				{
					write(1, ", ", 2);
				}
				++number[2];
			}
			++number[1];
		}
		++number[0];
	}
}
