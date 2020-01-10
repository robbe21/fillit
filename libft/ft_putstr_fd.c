/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 17:18:05 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/15 17:18:06 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *c, int fd)
{
	int i;

	i = 0;
	if (!c)
		return ;
	while (c[i])
	{
		ft_putchar_fd(c[i], fd);
		i++;
	}
}
