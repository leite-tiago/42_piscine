/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:33:58 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/30 18:58:53 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	i = 0;
	j = 0;
	r = 0;
	while (dest[i])
		++i;
	while (src[r])
		++r;
	if (size <= i)
		r += size;
	else
		r += i;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (r);
}

/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char			dest[20] = "Hello";
	char			*src;
	unsigned int	size;
	unsigned int	result;

	src = " world!";
	size = 20;
	printf("Before concatenation: dest = %s\n", dest);
	printf("Length of dest before concatenation: %zu\n", strlen(dest));
	result = ft_strlcat(dest, src, size);
	printf("After concatenation: dest = %s\n", dest);
	printf("Length of dest after concatenation: %zu\n", strlen(dest));
	printf("Return value of ft_strlcat: %u\n", result);
	return (0);
}
*/