/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:22:47 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/11 20:29:44 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"


int main(int argc, char **argv)
{
    // Read dictionary
    Dict_Entry **dict;
    Dict_Entry **dict_aux;

    if (argc >= 3) {
        // argv[0] is the program name
        // argv[1] is the number
        // argv[2] is the dicionary filename
        // ./main 42 numbers.dict

        // Read dictionary
        dict = ft_read_dict(argv[2]);
    }
    else if (argc >= 2) {
        // argv[0] is the program name
        // argv[1] is the number
        // Use the dicionary filename in project
        // ./main 42

        // Read dictionary
        dict = ft_read_dict("numbers.dict");
    }

    dict_aux = dict;

    // Print dictionary entries
    // while (*dict_aux != NULL)
    // {
    //     write(1, (*dict_aux)->number_str, ft_strlen((*dict_aux)->number_str));
    //     write(1, " - ", 3);
    //     write(1, (*dict_aux)->text, ft_strlen((*dict_aux)->text));
    //     write(1, "\n", 1);

    //     ++dict_aux;
    // }

//        // Try to find entries (valid and invalid)

//        char *text = ft_find_in_dict(dict, "1000");
//        if (text == NULL)
//        {
//            write(1, "Dict Error\n", 12);
//            return (0);
//        }
//        else {
//            write(1, text, ft_strlen(text));
//        }


//        text = ft_find_in_dict(dict, "ola");
//        if (text == NULL)
//        {
//            write(1, "Dict Error\n", 12);
//            return (0);
//        }
//        else {
//            write(1, text, ft_strlen(text));
//        }

//    }

    translate(dict, argv[1]);

    return 0;
}






























