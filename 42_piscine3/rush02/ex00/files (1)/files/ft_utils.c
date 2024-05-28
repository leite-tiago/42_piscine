
#include "ft_utils.h"


int ft_strlen(char *str)
{
   int len;
   len = 0;

   while (*str != '\0') {
       ++str;
       ++len;
   }
   return len;
}


int ft_strcmp(char *str1, char *str2)
{
    int len1;
    int len2;
    len1 = ft_strlen(str1);
    len2 = ft_strlen(str2);

    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 < *str2)
            return -1;
        else if (*str1 > *str2)
            return 1;
        else { // They are equal in the current char, continue
            ++str1;
            ++str2;
        }
    }

    if (len1 == len2)
        return 0;
    else if (len1 < len2) {
        return -1;
    }
    else {
        return 1;
    }
}


void translate(Dict_Entry **dict, char *str)
{

    translate_aux(dict, str, 0, ft_strlen(str));

}


void translate_aux(Dict_Entry **dict, char *str, int index, int len)
{
    char *hundred;
    char *tenth;
    char *unit;
    int i;
    char *text;
    int number;

    if (len == 1)
    {
        unit = malloc((len + 1) * sizeof (char));
        unit[0] = str[index];
        unit[len] = '\0';
        // Print
        text = ft_find_in_dict(dict, unit);
        if (text == NULL)
        {
            write(1, "Dict Error\n", 12);
            return;
        }
        else {
            write(1, text, ft_strlen(text));
        }
    }
    else if (len == 2)
    {
        tenth = malloc((len + 1) * sizeof (char));
        // Copy
        i = 0;
        while (i < len)
        {
            tenth[i] = str[index + i];
            ++i;
        }
        tenth[len] = '\0';
        // Check if < 20 or it is a tenth
        number = atoi(tenth);
        if (number < 20
                || number == 20
                || number == 30
                || number == 40
                || number == 50
                || number == 60
                || number == 70
                || number == 80
                || number == 90
                )
        {
            // Print
            text = ft_find_in_dict(dict, tenth);
            if (text == NULL)
            {
                write(1, "Dict Error\n", 12);
                return;
            }
            else {
                write(1, text, ft_strlen(text));
            }
            return;
        }
        else { // Print tenth and unit
            tenth[len-1] = '0'; // Zero the unit
            // Print
            text = ft_find_in_dict(dict, tenth);
            if (text == NULL)
            {
                write(1, "Dict Error\n", 12);
                return;
            }
            else {
                write(1, text, ft_strlen(text));
            }
            write(1, " ", 1); // Space
        }

        // Call recursively
        translate_aux(dict, str, index + 1, len - 1);

    }


//    if (len == 37)
//    {
//        unit = str[index];
//        // Convert to string and print
//        char *str =
//    }

//    if (len >= 34 && len <= 37)
//    {
//        if (len == 34)
//            hundred = str[index];

//    }
}























