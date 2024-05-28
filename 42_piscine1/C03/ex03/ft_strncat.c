/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:27:41 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/31 10:57:07 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char			dest[20] = "Hello";
	char			src[] = " world!";
	unsigned int	nb;
	char			*result;

	nb = 6;
	printf("Before concatenation: dest = %s\n", dest);
	result = ft_strncat(dest, src, nb);
	printf("After concatenation: dest = %s\n", dest);
	printf("Return value of ft_strncat: %s\n", result);
	return (0);
}
*/