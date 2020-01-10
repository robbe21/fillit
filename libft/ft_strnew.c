/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 14:30:26 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/01/31 17:16:32 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *c;

	c = (char*)malloc(size + 1);
	if (!c)
		return (NULL);
	ft_memset(c, '\0', size + 1);
	return (c);
}
