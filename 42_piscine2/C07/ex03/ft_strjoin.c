/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:31:48 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/04 17:05:45 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_total_len(char **strs, int size)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		total_len += ft_strlen(strs[i++]);
	}
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	int		i;
	char	*final_string;

	if (size <= 0 || !sep || !strs)
	{
		final_string = malloc(sizeof(char));
		final_string[0] = '\0';
		return (final_string);
	}
	total_size = ft_strlen(sep) * (size - 1) + ft_total_len(strs, size) + 1;
	final_string = malloc(sizeof(char) * total_size);
	if (!final_string)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(final_string, strs[i++]);
		if (i < size)
			ft_strcat(final_string, sep);
	}
	final_string[total_size - 1] = '\0';
	return (final_string);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Hello", "World", "Test"};
	int		size;
	char	*sep;
	char	*result;

	size = sizeof(strs) / sizeof(strs[0]);
	sep = " | ";
	result = ft_strjoin(size, strs, sep);
	printf("Joined string: %s\n", result);
	free(result); // Free the allocated memory
	return (0);
}
*/