/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:09:05 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/01 17:34:24 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		++len;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	int	length;

	char str[] = "Hello, World!"; // Sample string
	length = ft_strlen(str);
	printf("Length of \"%s\": %d\n", str, length);
	return (0);
}
*/