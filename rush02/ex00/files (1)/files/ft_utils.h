#ifndef FT_UTILS_H
#define FT_UTILS_H

#include "ft_read_dict.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int ft_strlen(char *str);


int ft_strcmp(char *str1, char *str2);


void translate(Dict_Entry **dict, char *str);


void translate_aux(Dict_Entry **dict, char *str, int index, int len);



#endif // FT_UTILS_H
