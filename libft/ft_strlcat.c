/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 14:02:29 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/17 14:02:29 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	l_dest;
	size_t	l_src;

	i = 0;
	l_dest = ft_strlen((char*)dst);
	l_src = ft_strlen((char*)src);
	if (l_dest > n)
		return (ft_strlen((char*)src) + n);
	while (l_dest + i < n - 1 && src[i])
	{
		dst[l_dest + i] = src[i];
		i++;
	}
	dst[l_dest + i] = '\0';
	return (l_dest + l_src);
}
