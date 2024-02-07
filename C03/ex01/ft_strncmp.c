/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:10:37 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/31 10:51:10 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (!n)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		++i;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char			str1[] = "Hello";
	char			str2[] = "Hella";
	unsigned int	n;
	int				result;

	n = 5;
	result = ft_strncmp(str1, str2, n);
	if (result < 0)
		printf("'%s' is less than '%s'\n", str1, str2);
	else if (result > 0)
		printf("'%s' is greater than '%s'\n", str1, str2);
	else
		printf("'%s' is equal to '%s'\n", str1, str2);
	return (0);
}
*/