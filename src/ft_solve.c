/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_solve.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/16 19:21:03 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/02/28 11:30:45 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_printmap(char **map)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(*map);
	while (i < len)
	{
		ft_putstr(map[i]);
		ft_putstr("\n");
		i++;
	}
}

int		ft_sqrtt(int c)
{
	int i;
	int k;

	k = 1;
	i = 1;
	while (k < c)
	{
		i++;
		k = i * i;
	}
	return (i);
}

char	**ft_make_map(int c)
{
	char	**map;
	int		i;

	i = 0;
	map = (char**)malloc(sizeof(char*) * (c + 1));
	if (map == NULL)
		ft_error();
	map[c] = NULL;
	while (i < c)
	{
		map[i] = (char*)malloc(sizeof(char) * (c + 1));
		if (!map[i])
			ft_error();
		ft_memset(map[i], '.', c);
		map[i][c] = '\0';
		i++;
	}
	return (map);
}

int		ft_tetrocount(t_tetro *lst)
{
	int i;

	i = -1;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_solve(t_tetro *tetro)
{
	char	**map;
	int		count;

	count = ft_tetrocount(tetro);
	count = ft_sqrtt(count * 4);
	map = ft_make_map(count);
	while (!ft_recurs_solver(map, tetro, 0))
	{
		count++;
		ft_free_map(map);
		free(map);
		map = ft_make_map(count);
	}
	ft_printmap(map);
	ft_free_map(map);
	free(map);
}
