/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:25:00 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/30 18:02:40 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!('a' <= *str && *str <= 'z'))
			return (0);
		++str;
	}
	return (1);
}

/*
int	main(void)
{
	char	str[3] = {"oLa"};

	ft_str_is_lowercase(&str[0]);
}
*/