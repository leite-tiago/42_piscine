
#include "ft_read_dict.h"
#include "ft_utils.h"

#define MAX_LENGTH 1000

Dict_Entry	**ft_read_dict(char *filename)
{
	int			fd;
	int			bytes_read;
	int			how_many_lines;
	int			i;
	int			startLineIndex;
	int			dict_index;
	int			strlen;
	char		*dictionary_str;
	Dict_Entry	**dictionary;
	int			m;
	int			copy_j;
	int			size_number_str;
	int			size_text;
	Dict_Entry	*entry;
	char		*line;
	int			j;

	dictionary_str = malloc(MAX_LENGTH);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Dict Error\n", 12);
		return (0);
	}
	bytes_read = read(fd, dictionary_str, MAX_LENGTH);
	i = 0;
	how_many_lines = 0;
	while (dictionary_str[i] != '\0')
	{
		if (dictionary_str[i] == '\n')
			++how_many_lines;
		++i;
	}
	dictionary = malloc(how_many_lines * (sizeof(Dict_Entry *) + 1));
	i = 0;
	startLineIndex = 0;
	dict_index = 0;
	strlen = 0;
	while (dictionary_str[i] != '\0')
	{
		if (dictionary_str[i] == '\n')
		{
			entry = malloc(sizeof(Dict_Entry));
			line = malloc((strlen + 1) * (sizeof(char)));
			j = 0;
			while (j < strlen)
			{
				line[j] = dictionary_str[startLineIndex];
				++j;
				++startLineIndex;
			}
			line[strlen] = '\0';
			size_number_str = ft_strlen(get_nbr_str(line));
			entry->number_str = malloc((size_number_str + 1) * (sizeof(char)));
			m = 0;
			while (m < size_number_str)
			{
				entry->number_str[m] = get_nbr_str(line)[m];
				++m;
			}
			entry->number_str[size_number_str] = '\0';
			size_text = ft_strlen(get_text(line));
			entry->text = malloc((size_text + 1) * (sizeof(char)));
			m = 0;
			while (m < size_text)
			{
				entry->text[m] = get_text(line)[m];
				++m;
			}
			entry->text[size_text] = '\0';
			dictionary[dict_index] = entry;
			++dict_index;
			++i;
			++startLineIndex;
			strlen = 0;
		}
		else
		{
			++strlen;
			++i;
		}
	}
	dictionary[dict_index] = NULL;
	free(dictionary_str);
	return (dictionary);
}

char	*ft_find_in_dict(Dict_Entry **dict, char *key)
{

	while (*dict != NULL)
	{
		if (ft_strcmp((*dict)->number_str, key) == 0)
			return ((*dict)->text);
		++dict;
	}
	return (NULL);
}

void	ft_free_dict(Dict_Entry **dict)
{
	Dict_Entry	*ptr;

	while (*dict != NULL)
	{
		ptr = (*dict);
		free(ptr->number_str);
		free(ptr->text);
		free(ptr);
		++dict;
	}
	free(dict);
}
