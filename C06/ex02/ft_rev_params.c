/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:17:00 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/02 12:21:00 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char *argv[])
{
	while (argc > 1)
	{
		write(1, argv[argc - 1], ft_strlen(argv[argc - 1]));
		write(1, "\n", 1);
		--argc;
	}
}

/*
cc -Wall -Wextra -Werror *.c && ./a.out test1 test2 test3 | cat -e
*/