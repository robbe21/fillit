/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 16:52:56 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/11 16:52:56 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	long l;
	long i;

	i = 0;
	l = ft_strlen((char*)s1);
	while (s2[i])
	{
		s1[l] = s2[i];
		i++;
		l++;
	}
	s1[l] = '\0';
	return (s1);
}
