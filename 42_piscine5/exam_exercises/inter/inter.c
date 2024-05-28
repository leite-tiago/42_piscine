/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:22:12 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/15 10:34:59 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doub(char *str, char c, int pos)
{
	int i;

	i = 0;
	while(i < pos)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		while(av[1][i])
		{	
			j = 0;
			while(av[2][j])
			{
				if(av[1][i] == av[2][j])
				{	
					if((check_doub(av[1], av[1][i], i) == 1) && (check_doub(av[2], av[1][i], j) == 1))
						write(1, &av[1][i], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
