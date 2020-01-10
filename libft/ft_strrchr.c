/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 18:11:40 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/11 18:11:40 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long i;

	i = ft_strlen((char*)s);
	if (c == '\0' && s[i] == '\0')
		return ((char*)&s[i]);
	i--;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		i--;
	}
	return (NULL);
}
