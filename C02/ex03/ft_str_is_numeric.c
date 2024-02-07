/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:22:39 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/30 18:10:45 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!('0' <= *str && *str <= '9'))
			return (0);
		++str;
	}
	return (1);
}

/*
int	main(void)
{
	char	str[4] = {"5ola"};

	ft_str_is_numeric(&str[0]);
}
*/