/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:21:49 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/04 10:54:22 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb);
void ft_putchar(char c);
void ft_putstr(char *str);
int ft_atoi(char *str);
int ft_strlen(char *str);
#include <stdlib.h>

int	check_args(int argc, char **argv)
{
	/* the function can only receive 1 argument beyond the program's name */
	if (argc != 2)
		return (0);
	/* the argument needs to contain 31 char's (16 numbers) */
	if (ft_strlen(argv[1]) != 31)
		return (0);
	/* if the input is correct we can continue */
	return (1);
}

int	*get_numbers_args(char *str)
{
	int	i;
	int	j;
	int	*povs;

	i = -1;
	j = -1;
	povs = malloc(sizeof(int) * 16);
	while (str[++i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			povs[++j] = ft_atoi(str + i);
	}
	return (povs);
}
