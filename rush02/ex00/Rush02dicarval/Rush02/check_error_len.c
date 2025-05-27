/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:48:09 by tborges-          #+#    #+#             */
/*   Updated: 2024/02/11 19:48:17 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *num)
{
	int	i;

	i = 0;
	while (num[i] != '\0')
		i++;
	return (i);
}

int	ft_check_error(char *num)
{
	int i;

	i = 0;
	if (num[i] == '-')
		return (0);
	while (num[i] != '\0')
	{
		if (num[i] < '0' || num[i] > '9')
			return(0);
		i++;
	}
	return (1);
}
