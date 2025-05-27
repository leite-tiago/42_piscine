/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:06:17 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/15 18:36:44 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int	power(int base, int exp)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	while (i < exp)
	{
		res *= base;
		++i;
	}
	return (res);
}

char	*itoa(int nb)
{
	int	len;
	int	aux;
	char	*res;
	int	i;

	len = 0;
	aux = nb;
	i = 0;
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	res = malloc(len + 1);
	while (len > 0)
	{
		res[i] = ((aux / (power(10, (len)))) % 10) + 48;
		len--;
		i++;
	}
	res[i] = '\0';
	return (res);
}

#include <stdio.h>

int	main(void)
{
	int x = 5432341;
	printf("%s\n", itoa(x));
}
