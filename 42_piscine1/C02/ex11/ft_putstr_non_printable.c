/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:24:17 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/30 18:42:44 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_to_hex(char c, char *hex)
{
	char	*chars;

	chars = "0123456789abcdef";
	hex[0] = chars[c % 16];
	hex[1] = chars[c / 16];
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[2];

	i = 0;
	while (str[i])
	{
		if (32 <= str[i] && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			convert_to_hex(str[i], hex);
			write(1, "\\", 1);
			write(1, hex, 2);
		}
		++i;
	}
}
