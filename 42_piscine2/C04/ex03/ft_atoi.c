/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:53:13 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/01 10:03:38 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	odd_even(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while ((str[i] == '-') || (str[i] == '+') || (str[i] == ' '))
	{
		if (str[i] == '-')
			++c;
		++i;
	}
	if (c % 2 == 0)
		return (0);
	else
		return (1);
}

int	how_many_spaces(char *str)
{
	int	i;

	i = 0;
	while (!('0' <= str[i] && str[i] <= '9'))
		++i;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	nums_len;
	int	result;

	i = how_many_spaces(str);
	j = 0;
	nums_len = 1;
	result = 0;
	while (('0' <= str[i + j] && str[i + j] <= '9'))
	{
		nums_len *= 10;
		++j;
	}
	nums_len /= 10;
	while (('0' <= str[i] && str[i] <= '9'))
	{
		result += (str[i] - '0') * nums_len;
		nums_len /= 10;
		++i;
	}
	if (odd_even(str) == 1)
		result *= -1;
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = " ---+--+1234ab567";
	printf("%i", ft_atoi(str));
}
*/