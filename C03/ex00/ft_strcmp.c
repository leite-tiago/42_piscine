/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:37:37 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/30 19:03:53 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		++i;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hella";
	char	str2[] = "Hello";
	int		result;

	result = ft_strcmp(str1, str2);
	if (result < 0)
		printf("'%s' is less than '%s'\n", str1, str2);
	else if (result > 0)
		printf("'%s' is greater than '%s'\n", str1, str2);
	else
		printf("'%s' is equal to '%s'\n", str1, str2);
	return (0);
}
*/