/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 09:58:28 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/02 12:21:51 by tborges-         ###   ########.fr       */
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
	++argc;
	write(1, argv[0], ft_strlen(argv[0]));
	write(1, "\n", 1);
}

/*
cc -Wall -Wextra -Werror *.c && ./a.out | cat -e
*/