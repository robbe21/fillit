/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/16 14:38:46 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/02/16 18:38:51 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_check_valid_block(char *str)
{
	int		i;
	int		k;

	k = 0;
	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if (i + 1 < 20 && str[i + 1] == '#')
				k++;
			if ((i + 5) < 20 && str[i + 5] == '#')
				k++;
			if ((i - 1) >= 0 && str[i - 1] == '#')
				k++;
			if ((i - 5) >= 0 && str[i - 5] == '#')
				k++;
		}
		i++;
	}
	if (k == 6 || k == 8)
		return (1);
	return (0);
}

int			ft_check_grid(char *str, int count)
{
	int		i;
	int		k;
	int		x;

	i = 0;
	x = 0;
	k = 0;
	while (i < 20)
	{
		if (str[i] == '.')
			k++;
		if (str[i] == '#')
			x++;
		i++;
	}
	if (str[4] != '\n' || str[9] != '\n' || str[14] != '\n' || str[19] != '\n')
		return (0);
	if (x != 4 || k != 12)
		return (0);
	if (count == 21 && str[20] != '\n')
		return (0);
	x = ft_check_valid_block(str);
	if (!x)
		return (0);
	return (1);
}
