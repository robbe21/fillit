/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/13 12:07:25 by awehlbur       #+#    #+#                */
/*   Updated: 2019/02/28 11:28:03 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"
# include <fcntl.h>

typedef struct					s_tetro
{
	struct s_tetro				*next;
	int							x[4];
	int							y[4];
	char						let;
}								t_tetro;

int								ft_recurs_solver(char **map, \
	t_tetro *tetro, int i);
t_tetro							*ft_fix_tetro_temp(int i, \
	int k, t_tetro *tetro);
void							ft_free_map(char **map);
void							ft_error();
int								ft_get_tetri(int fd, t_tetro **tetro);
int								ft_check_grid(char *str, int count);
void							ft_solve(t_tetro *tetro);

#endif
