/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 20:17:18 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/11 20:17:19 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t len)
{
	long	l;
	size_t	i;

	i = 0;
	l = ft_strlen((char*)s1);
	while (s2[i] && i < len)
	{
		s1[l] = s2[i];
		i++;
		l++;
	}
	s1[l] = '\0';
	return (s1);
}
