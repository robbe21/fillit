/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/13 12:17:06 by awehlbur       #+#    #+#                */
/*   Updated: 2019/02/17 19:32:38 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_temporary(char *str, t_tetro *temp, int i, int desthash)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (i < 20)
	{
		x = 0;
		while (x < 4)
		{
			if (str[i] == '#')
			{
				temp->x[desthash] = x;
				temp->y[desthash] = y;
				desthash++;
			}
			i++;
			x++;
		}
		y++;
		i++;
	}
}

void	ft_tetroaddback(t_tetro **alst, t_tetro *node)
{
	t_tetro	*lst;

	lst = *alst;
	if (lst == NULL)
	{
		*alst = node;
	}
	else
	{
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = node;
	}
}

t_tetro	*ft_fix_tetro(t_tetro *tetro)
{
	int i;
	int k;

	i = 0;
	k = 4;
	ft_fix_tetro_temp(i, k, tetro);
	return (tetro);
}

t_tetro	*ft_make_tetro(char *str, char c, int i)
{
	t_tetro *temp;
	int		desthash;

	desthash = 0;
	temp = (t_tetro*)malloc(sizeof(t_tetro));
	if (temp == NULL)
		ft_error();
	temp->let = c;
	ft_temporary(str, temp, i, desthash);
	return (ft_fix_tetro(temp));
}

int		ft_get_tetri(int fd, t_tetro **tetro)
{
	char	buf[22];
	char	curr;
	int		ret;
	t_tetro *temp;

	curr = 'A';
	ret = 100;
	while (ret > 20)
	{
		if (curr > 'Z')
			ft_error();
		ret = read(fd, buf, 21);
		buf[ret] = '\0';
		if (!ft_check_grid(buf, ret))
			ft_error();
		temp = ft_make_tetro(buf, curr, 0);
		ft_tetroaddback(tetro, temp);
		curr++;
	}
	return (1);
}
