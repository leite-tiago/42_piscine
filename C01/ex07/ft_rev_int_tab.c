/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:10:53 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/29 13:02:34 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	buffer;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		buffer = tab[i];
		tab[i] = tab[j];
		tab[j] = buffer;
		++i;
		--j;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6};
	int	size;

	size = sizeof(arr) / sizeof(arr[0]);
	printf("Original array: ");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	ft_rev_int_tab(arr, size);
	printf("Reversed array: ");
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return (0);
}
*/