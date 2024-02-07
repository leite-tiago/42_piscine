/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:50:33 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/30 18:15:08 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (('A' <= str[i] && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		++i;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[3] = {"Ola"};

	ft_strlowcase(&str[0]);
}
*/