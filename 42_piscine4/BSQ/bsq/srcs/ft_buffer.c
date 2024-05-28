/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:56:51 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/13 11:16:18 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_replace_buffer(int length, char *old_buffer, int old_buffer_size)
{
	char	*buffer;
	int		offset;

	buffer = malloc(length * sizeof (char));
	if (!buffer)
		return (NULL);
	offset = -1;
	if (old_buffer)
	{
		while (++offset < old_buffer_size)
			buffer[offset] = old_buffer[offset];
		buffer[offset] = '\0';
		free(old_buffer);
	}
	while (++offset < length)
		buffer[offset] = '\0';
	return (buffer);
}
