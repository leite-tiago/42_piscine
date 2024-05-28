/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:54:59 by dicarval          #+#    #+#             */
/*   Updated: 2024/02/11 16:10:21 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	find_hund(char *hund)
{
	int i;

	i = 0;
	if (hund[1]  == '\0') // unidade
	{
		ft_atoi (); // linha da unidade
	}
	else if (hund [2] == '\0') // dezena 
	{
		if (hund [0] == '1') 
			ft_atoi (); // linha da dezena
		else if (hund[1] == '0')
			ft_atoi (); // linha da dezena
		else
		{	
			ft_atoi (); // linha da dezena
			write (1, " ", 1);
			i++;
			ft_atoi (); // linha da unidade	
		}
	}
	else						//centena
	{
		if (hund [1] == '0')
		{
			ft_atoi (); // linha unidade da centena
			write (1, " ", 1);
			ft_atoi (); // centena
			write (1, " ", 1);
			i++;
			i++;
			ft_atoi (); // linha da unidade
		}
		else if (hund [1] == '1')
		{
			ft_atoi (); // linha unidade da centena
			write (1, " ", 1);
			ft_atoi (); // centena
			write (1, " ", 1);			
			i++;
			ft_atoi (); // linha da dezena
		}
		else if ( hund [2] == '0' && hund [1] == '0')
		{
			ft_atoi (); // linha unidade da centena
			write (1, " ", 1);			
			ft_atoi (); // centena
		}
		else if (hund [2] == '0')
		{
			ft_atoi (); // linha unidade da centena
			write (1, " ", 1);
			ft_atoi (); // centena
			write (1, " ", 1);
			i++;
			ft_atoi (); // linha da dezena
		}
		else 
		{
			ft_atoi (); // linha unidade da centena
			write (1, " ", 1);			
			ft_atoi (); // centena
			write (1, " ", 1);			
			i++;
			ft_atoi (); // linha da dezena
			write (1, " ", 1);			
			i++;
			ft_atoi (); // linha da unidade
		}
	}
}

void find_thousd(int group_size, char *str[])
{
	int i;
	int j;

	i = 0;
	i = 28 + j;
	while (i >= 29 )
	{
		/* code */
	}



}