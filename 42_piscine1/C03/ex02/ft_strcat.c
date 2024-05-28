/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:25:00 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/30 11:59:30 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	src_len;
	int	dest_len;

	src_len = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		++dest_len;
	while (src[src_len] != '\0')
	{
		dest[dest_len + src_len] = src[src_len];
		++src_len;
	}
	dest[dest_len + src_len] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "Hello";
	char	src[] = " world!";
	char	*result;

	printf("Before concatenation: dest = %s\n", dest);
	result = ft_strcat(dest, src);
	printf("After concatenation: dest = %s\n", dest);
	printf("Return value of ft_strncat: %s\n", result);
	return (0);
}
*/
