/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 16:04:26 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/15 16:04:26 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*c;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(c = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	len += start;
	while (start < len)
	{
		c[i] = s[start];
		start++;
		i++;
	}
	c[i] = '\0';
	return (c);
}
