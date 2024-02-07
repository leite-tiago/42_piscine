/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:02:20 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/02 09:27:20 by tborges-         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		++nb;
	}
	return (nb);
}
