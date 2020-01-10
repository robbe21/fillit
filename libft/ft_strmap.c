/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 17:06:21 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/01/31 17:15:43 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	long	l;
	char	*str;
	long	i;

	i = 0;
	if (!s)
		return (NULL);
	l = ft_strlen((char*)s);
	str = (char*)malloc(sizeof(char) * l + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
