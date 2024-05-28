/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:02:23 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/01 10:25:54 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	verify_base(char *base)
{
	if (base == "0123456789")
		return (10);
	else if (base == "01")
		return (2);
	else if (base == "0123456789ABCDEF")
		return (16);
	else if (base == "poneyvif")
		return (8);
	else
		return (0);
}

void	put_char(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_putnbr_dec(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		ft_putnbr_dec(nb);
	}
	else if (nb <= 9)
	{
		put_char(nb);
	}
	else
	{
		ft_putnbr_dec(nb / 10);
		ft_putnbr_dec(nb % 10);
	}
}

void	ft_putnbr_bin(int nb)
{
    if (nb < 0)
    {
        
    }
}

void	ft_putnbr_hex(int nb)
{
}

void	ft_putnbr_oct(int nb)
{
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (verify_base(base) == 10)
		ft_putnbr_dec(nbr);
	else if (verify_base(base) == 2)
		ft_putnbr_bin(nbr);
	else if (verify_base(base) == 16)
		ft_putnbr_hex(nbr);
	else if (verify_base(base) == 8)
		ft_putnbr_oct(nbr);
}

int	main(void)
{
	char	*base;

	base = "0123456789ABCDEF";
	ft_putnbr_base(8, base);
}
