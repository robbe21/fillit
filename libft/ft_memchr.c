/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 18:12:04 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/16 18:12:04 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*d;

	d = (char*)s;
	i = 0;
	while (i < n)
	{
		if (d[i] == (char)c)
			return (&d[i]);
		i++;
	}
	return (NULL);
}
