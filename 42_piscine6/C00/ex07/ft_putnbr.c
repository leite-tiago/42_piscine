/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:56:03 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/25 17:42:58 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		write(1, "147483648", 9);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	else if (nb <= 9)
	{
		put_char(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
