/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:55:48 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/01 17:53:50 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb > 0)
		factorial *= nb * ft_recursive_factorial(nb - 1);
	if (nb < 0)
		return (0);
	return (factorial);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_recursive_factorial(7));
}
*/