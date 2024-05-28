/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:20:45 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/30 18:21:46 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size >= 1)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			++i;
		}
		while (i < size)
		{
			dest[i] = '\0';
			++i;
		}
	}
	i = 0;
	while (src[i++])
	{
	}
	return (i - 1);
}

/*
int	main(void)
{
	char	str[3] = {"ola"};
	char	destination[3];

	ft_strncpy(&destination[0], &str[0], 2);
}
*/