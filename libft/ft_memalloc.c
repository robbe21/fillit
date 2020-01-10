/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 12:14:56 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/01/31 17:13:08 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *c;

	c = (void*)malloc(size);
	if (!c)
		return (NULL);
	ft_bzero(c, size);
	return (c);
}
