/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:23:40 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/06 16:00:37 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strchr(char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		++str;
	}
    return (NULL);
}

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

char	**split_2(int len, char *seperators, char *string, int count)
{
	char	buffer[255];
	char	**final_strings_array;
	int		string_index;
	int		i;
	int		j;

	final_strings_array = malloc(sizeof(char *) * count);
	i = 0;
	string_index = 0;
	while (i < len)
	{
		while ((i < len) && (ft_strchr(seperators, string[i]) != NULL))
			i++;
		j = 0;
		while ((i < len) && (ft_strchr(seperators, string[i]) == NULL))
			buffer[j++] = string[i++];
		if (j > 0)
		{
			buffer[j] = '\0';
			final_strings_array[string_index] = malloc(sizeof(char)
					* (ft_strlen(buffer) + 1));
			ft_strcpy(final_strings_array[string_index++], buffer);
		}
	}
	return (final_strings_array);
}

char	**ft_split(char *string, char *seperators)
{
	int	len;
	int	i;
	int	old_i;
	int	count;

	len = ft_strlen(string);
	count = 0;
	i = 0;
	while (i < len)
	{
		while ((i < len) && (ft_strchr(seperators, string[i]) != NULL))
			i++;
		old_i = i;
		while ((i < len) && (ft_strchr(seperators, string[i]) == NULL))
			i++;
		if (i > old_i)
			count += 1;
	}
	return (split_2(len, seperators, string, count));
}
/*
#include <stdio.h>
int	main(void)
{
	char	s[] = "Ser, ou nao ser, eis a questao.";
	char	**split_strings;

	split_strings = ft_split(s, " ,.");
	for (int i = 0; i < 7; i++)
		printf("%s\n", split_strings[i]);
	for (int i = 0; i < 7; i++)
		free(split_strings[i]);
	free(split_strings);
	return (0);
}
*/