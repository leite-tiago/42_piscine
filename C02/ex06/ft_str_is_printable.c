/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:28:37 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/30 18:21:56 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(32 <= *str && *str <= 126))
			return (0);
		++str;
	}
	return (1);
}

/*
int	main(void)
{
	char	str[4] = {"O\0la"};

	ft_str_is_printable(&str[0]);
}
*/