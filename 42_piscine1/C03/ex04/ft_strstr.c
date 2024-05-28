/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:29:09 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/31 12:02:56 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			++j;
		}
		++i;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello, world!";
	char	to_find1[] = "world";
	char	to_find2[] = "foo";
	char	*result1;
	char	*result2;

	result1 = ft_strstr(str, to_find1);
	result2 = ft_strstr(str, to_find2);
	if (result1 != NULL)
	{
		printf("'%s' found at index: %ld\n", to_find1, result1 - str);
	}
	else
	{
		printf("'%s' not found.\n", to_find1);
	}
	if (result2 != NULL)
	{
		printf("'%s' found at index: %ld\n", to_find2, result2 - str);
	}
	else
	{
		printf("'%s' not found.\n", to_find2);
	}
	return (0);
}
*/
