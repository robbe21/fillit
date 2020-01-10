/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 10:47:05 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/02/01 14:03:25 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t			i;
	unsigned char	*d;

	if (len == 0)
		return ;
	d = b;
	i = 0;
	while (i < len)
	{
		d[i] = 0;
		i++;
	}
}
