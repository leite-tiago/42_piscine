/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:36:50 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/15 10:49:20 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

int	check_double(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (check_double(argv[1], argv[1][i], i) == 0)
				write(1, &argv[1][i], 1);
			++i;
		}
		i = 0;
		while (argv[2][i])
		{
			if ((check_double(argv[1], argv[2][i], len(argv[1])) == 0) && (check_double(argv[2], argv[2][i] , i) == 0))
				write(1, &argv[2][i], 1);
			++i;
		}
	}
	write(1, "\n", 1);
}
