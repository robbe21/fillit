/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/13 12:02:59 by awehlbur       #+#    #+#                */
/*   Updated: 2019/02/28 11:30:58 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error(void)
{
	ft_putstr("error\n");
	exit(0);
}

int		main(int ac, char **av)
{
	int		fd;
	t_tetro *list;
	int		i;

	i = 10;
	list = NULL;
	if (ac != 2)
	{
		ft_putstr("usage: ./fillit [filehereplz]\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd <= 0)
		return (0);
	if (!ft_get_tetri(fd, &list))
		ft_error();
	ft_solve(list);
	return (1);
}
