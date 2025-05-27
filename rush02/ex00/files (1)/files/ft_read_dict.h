#ifndef FT_READ_DICT_H
#define FT_READ_DICT_H

typedef struct Dict_Entry_struct
{
    char *number_str;
    char *text;
} Dict_Entry;



Dict_Entry **ft_read_dict(char *filename);


char * ft_find_in_dict(Dict_Entry **dictionary, char *key);


void ft_free_dict(Dict_Entry **dict);


#endif // FT_READ_DICT_H
