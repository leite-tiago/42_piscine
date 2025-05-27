/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:56:40 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/13 10:00:03 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str, int length)
{
	int	result;
	int	offset;

	result = 0;
	offset = 0;
	while (ft_isdigit(str[offset]) && offset < length)
	{
		result = 10 * result + (str[offset] - '0');
		++offset;
	}
	return (result);
}
