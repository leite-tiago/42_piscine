/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:55:19 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/04 15:04:00 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	if (min >= max)
		return (0);
	res = malloc(sizeof(int) * (max - min));
	if (!res)
		return (0);
	i = 0;
	while (i + min < max)
	{
		res[i] = i + min;
		++i;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*result;

	min = 5;
	max = 10;
	result = ft_range(min, max);
	if (result == NULL)
	{
		printf("Memory allocation failed or min >= max.\n");
		return (1);
	}
	printf("Result: ");
	for (int i = 0; i < max - min; ++i)
	{
		printf("%d ", result[i]);
	}
	printf("\n");
	free(result); // Free the allocated memory
	return (0);
}
*/