/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: awehlbur <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/18 12:04:23 by awehlbur      #+#    #+#                 */
/*   Updated: 2019/02/18 12:04:24 by awehlbur      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_free_map(char **map)
{
	while (*map)
	{
		free(*map);
		map++;
	}
}

char	**ft_remove_tetro(t_tetro *tetro, char **map, int i, int j)
{
	map[tetro->y[0] + i][tetro->x[0] + j] = '.';
	map[tetro->y[1] + i][tetro->x[1] + j] = '.';
	map[tetro->y[2] + i][tetro->x[2] + j] = '.';
	map[tetro->y[3] + i][tetro->x[3] + j] = '.';
	return (map);
}

char	**ft_place_tetro(t_tetro *tetro, char **map, int i, int j)
{
	map[tetro->y[0] + i][tetro->x[0] + j] = tetro->let;
	map[tetro->y[1] + i][tetro->x[1] + j] = tetro->let;
	map[tetro->y[2] + i][tetro->x[2] + j] = tetro->let;
	map[tetro->y[3] + i][tetro->x[3] + j] = tetro->let;
	return (map);
}

int		ft_check_if_dots(t_tetro *tetro, char **map, int i, int j)
{
	if (map[tetro->y[0] + i][tetro->x[0] + j] == '.' &&
		map[tetro->y[1] + i][tetro->x[1] + j] == '.' &&
		map[tetro->y[2] + i][tetro->x[2] + j] == '.' &&
		map[tetro->y[3] + i][tetro->x[3] + j] == '.')
		return (1);
	return (0);
}

int		ft_recurs_solver(char **map, t_tetro *tetro, int i)
{
	int j;
	int len;

	len = ft_strlen(*map);
	if (tetro == NULL)
		return (1);
	i = 0;
	while (i + tetro->y[3] < len && tetro)
	{
		j = 0;
		while (j + tetro->x[3] < len)
		{
			if (ft_check_if_dots(tetro, map, i, j) == 1)
			{
				map = ft_place_tetro(tetro, map, i, j);
				if (ft_recurs_solver(map, tetro->next, i))
					return (1);
				else
					map = ft_remove_tetro(tetro, map, i, j);
			}
			j++;
		}
		i++;
	}
	return (0);
}
