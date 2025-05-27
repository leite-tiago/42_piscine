
#include "ft_utils.h"



#define MAX_LENGTH 1000


Dict_Entry **ft_read_dict(char *filename)
{
    int		fd;
    int		bytes_read;
    int		how_many_lines;
    int		i;
    int     startLineIndex;
    int		dict_index;
    int		strlen;
    char	*dictionary_str;
    Dict_Entry	**dictionary;
    int     m;
    int     j;
    int     copy_j;
    int     size_number_str;
    int     size_text;


    dictionary_str = malloc(MAX_LENGTH);
    fd = open(filename, O_RDONLY);
    if (fd < 0)
    {
        write(1, "Dict Error\n", 12);
        return (0);
    }
    bytes_read = read(fd, dictionary_str, MAX_LENGTH);
    dictionary_str[bytes_read] = '\0';
    // Close file
    close(fd);

///
    //printf("%s\n", dictionary_str);
///

    i = 0;
    how_many_lines = 0;
    while (dictionary_str[i] != '\0')
    {
        if (dictionary_str[i] == '\n')
            ++how_many_lines;
        ++i;
    }
    dictionary = malloc(how_many_lines * (sizeof(Dict_Entry*) + 1)); // +1 for NULL the last one

    i = 0;
    startLineIndex = 0; // Current line start index
    dict_index = 0;
    strlen = 0;
    while (dictionary_str[i] != '\0')
    {
        if (dictionary_str[i] == '\n')
        {
            // Create dictionary entry
            Dict_Entry *entry = malloc(sizeof (Dict_Entry));
            // Reserve space for entire line + '\0'
            char *line = malloc((strlen + 1) * (sizeof(char)));
            // Copy current line to "line" variable
            int j = 0;
            while (j < strlen) {
                line[j] = dictionary_str[startLineIndex];
                ++j;
                ++startLineIndex;
            }
            line[strlen] = '\0';

/// APAGAR
//                printf("line = %s\n", line);
///

            ///
            // The dictionary will have the following rules:
            //    [a number][0 to n spaces]:[0 to n spaces][any printable characters]\n
            size_number_str = 0;
            size_text = 0;
            // Parse and copy
            j = 0;
            // Count chars of number_str (key)
            while (line[j] != ':')
            {
                if (line[j] != ' ')
                {
                    ++size_number_str;
                }
                ++j;
            }
            entry->number_str = malloc((size_number_str + 1) * (sizeof(char)));
            j = 0;
            m = 0;
            // Copy chars of number_str (key)
            while (line[j] != ':')
            {
                if (line[j] != ' ')
                {
                    entry->number_str[m] = line[j];
                    ++m;
                }
                ++j;
            }
            entry->number_str[size_number_str] = '\0';

/// APAGAR
//            printf("j = %d\n", j);

///

            /// Do the same for text
            // j is positioned at the ":"
            copy_j = j;
            // Count chars of text (value)
            while (line[j] != '\0')
            {
                if (line[j] != ' ' && line[j] != ':')
                {
                    ++size_text;
                }
                ++j;
            }
            entry->text = malloc((size_text + 1) * (sizeof(char)));
            j = copy_j;
            m = 0;
            // Copy chars of text (value)
            while (line[j] != '\0')
            {
                if (line[j] != ' ' && line[j] != ':')
                {
                    entry->text[m] = line[j];
                    ++m;
                }
                ++j;
            }
            entry->text[size_text] = '\0';
            ///

            // Put entry into dictionary
            dictionary[dict_index] = entry;
            ++dict_index;
            ++i;
            ++startLineIndex;
            strlen = 0;
        }
        else {
            ++strlen;
            ++i;
        }
    }

    // Put NULL to mark the end of dictionary (there are no more structs)
    dictionary[dict_index] = NULL;

    // Free dictionary_str
    free(dictionary_str);


/// APAGAR
//    printf("how_many_lines = %d\n", how_many_lines);
//    printf("dict_index = %d\n", dict_index);
///

    return dictionary;
}




char *ft_find_in_dict(Dict_Entry **dict, char *key)
{

/// APAGAR
//    printf("\nkey = %s\n", key);

///


    // Print dictionary entries
    while (*dict != NULL)
    {
        if (ft_strcmp( (*dict)->number_str, key) == 0)
            return (*dict)->text;

        ++dict;
    }

    return NULL; // Could not find a valid entry
}



void ft_free_dict(Dict_Entry **dict)
{
    while (*dict != NULL)
    {
        Dict_Entry *ptr = (*dict);
        // Free strings inside struct
        free(ptr->number_str);
        free(ptr->text);

        // Free struct
        free(ptr);

        ++dict; // Advance dict pointer (pointer to the structs)
    }
    // Free dict
    free(dict);
}


















