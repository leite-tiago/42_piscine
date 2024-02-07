/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:30:29 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/30 18:14:03 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		++i;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[3] = {"Ola"};

	ft_strupcase(&str[0]);
}
*/