/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:55:16 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/02 09:27:16 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = nb;
	if (nb <= 1)
		return (0);
	while (n > 0)
	{
		if (nb % n == 0 && n != 1 && n != nb)
			return (0);
		--n;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(59));
}
*/