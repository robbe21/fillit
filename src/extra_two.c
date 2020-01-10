/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra_two.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: awehlbur <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/18 12:59:59 by awehlbur      #+#    #+#                 */
/*   Updated: 2019/02/18 13:00:00 by awehlbur      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetro	*ft_and_anotherone(int i, int k, t_tetro *tetro)
{
	i = 0;
	k = 4;
	while (i < 4)
	{
		if (k > tetro->y[i])
			k = tetro->y[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		tetro->y[i] -= k;
		i++;
	}
	return (tetro);
}

t_tetro	*ft_fix_tetro_temp(int i, int k, t_tetro *tetro)
{
	while (i < 4)
	{
		if (k > tetro->x[i])
			k = tetro->x[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		tetro->x[i] -= k;
		i++;
	}
	tetro = ft_and_anotherone(i, k, tetro);
	tetro->next = NULL;
	return (tetro);
}
