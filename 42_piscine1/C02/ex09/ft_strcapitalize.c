/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:52:45 by tborges-          #+#    #+#             */
/*   Updated: 2024/01/30 18:42:18 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha_numeric(char *letter)
{
	if ('A' <= *letter && *letter <= 'Z')
		return (3);
	else if ('a' <= *letter && *letter <= 'z')
		return (2);
	else if ('0' <= *letter && *letter <= '9')
		return (1);
	else
		return (0);
}

char	*ft_letterupcase(char *letter)
{
	if (is_alpha_numeric(letter) == 2)
	{
		*letter -= 32;
	}
	return (letter);
}

char	*ft_letterlowcase(char *letter)
{
	if (is_alpha_numeric(letter) == 3)
	{
		*letter += 32;
	}
	return (letter);
}

char	*ft_strcapitalize(char *str)
{
	int		c;
	char	*str_1;

	if (str == NULL)
		return (NULL);
	c = 0;
	str_1 = str;
	ft_letterupcase(str);
	while (*str != '\0')
	{
		++str;
		++c;
		if (is_alpha_numeric(str_1) == 0)
			ft_letterupcase(str);
		else
			ft_letterlowcase(str);
		str_1 = str;
	}
	return (str - c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*p;

	char	str[61] = {"salut,
			comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	p = &str[0];
	ft_strcapitalize(p);
	printf("%s\n", str);
}
*/