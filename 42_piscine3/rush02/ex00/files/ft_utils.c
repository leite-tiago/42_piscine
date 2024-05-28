/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:26:42 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/11 17:39:12 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

typedef int bool;

#define false 0
#define true 1

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		++i;
	}
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		++len;
	}
	return (len);
}

char *get_text(char *line)
{
	int	i;
	int j;
	char *form_text;

	form_text = malloc(ft_strlen(line));
	i = 0;
	j = 0;
	while (line[i - 1] != ':')
		i++;
	while (line[i] == 32)
		i++;
	while (line[i] > 32 && line[i] <= 126)
	{
		form_text[j] = line[i];
		j++;
		i++;
	}
	while (line[i] >= 32 && line[i] <= 126 && line[i] != '\0')
	{
		while (line[i] == 32 && (line [i + 1] == 32 || line [i + 1] == '\0'))
			i++;
		form_text[j] = line[i];
		j++;
		i++;
	}
	return (form_text);
}

 char *get_nbr_str(char *line)
{
	int i;
	int j;
	char *form_numb;

	form_numb = malloc(ft_strlen(line));
	i = 0;
	j = 0;
	while (line[i] >= '0' && line[i] <= '9')
	{
		form_numb[j] = line[i];
		i++;
		j++;
	}
	form_numb[j] = '\0';
	return (form_numb);
}
