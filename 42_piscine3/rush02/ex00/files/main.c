/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:49:06 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/11 19:46:40 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "ft_read_dict.h"

int	main(int argc, char **argv)
{
	Dict_Entry	**dict;
	char		*text;

	if (argc >= 2)
	{
		// argv[0] is the program name
		// argv[1] is the dicionary filename
		// argv[2] is the number
		dict = ft_read_dict(argv[1]);
		text = ft_find_in_dict(dict, argv[2]);
		if (text == NULL)
		{
			write(1, "Dict Error\n", 12);
			return (0);
		}
		else
		{
			write(1, text, ft_strlen(text));
		}
	}
}
