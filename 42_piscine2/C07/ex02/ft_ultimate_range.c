/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:23:29 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/04 15:03:57 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	if (!array)
		return (-1);
	i = 0;
	while (i + min < max)
	{
		array[i] = i + min;
		++i;
	}
	*range = array;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	result;

	min = 5;
	max = 10;
	result = ft_ultimate_range(&array, min, max);
	if (result == -1)
	{
		printf("Memory allocation failed or min >= max.\n");
		return (1);
	}
	printf("Result: ");
	for (int i = 0; i < result; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("Return value: ");
	printf("%i ", result);
	printf("\n");
	free(array); // Free the allocated memory
	return (0);
}
*/