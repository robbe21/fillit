/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 16:27:54 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/01/31 18:12:18 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	long	len;
	char	*c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	c = (char*)malloc(sizeof(char) * len + 1);
	if (!c)
		return (NULL);
	ft_strcpy(c, s1);
	ft_strcat(c, s2);
	return (c);
}
