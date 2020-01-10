/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memset.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 10:17:46 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/14 10:17:47 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*d;

	d = b;
	i = 0;
	while (i < len)
	{
		d[i] = c;
		i++;
	}
	return (b);
}
