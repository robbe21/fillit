/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 15:05:46 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/16 15:05:46 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	long i;
	long j;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen((char*)s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	if (j == i - 1)
		return ("");
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	return (ft_strsub(s, (int)i, j - i + 1));
}
