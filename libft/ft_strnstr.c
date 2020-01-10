/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strnstr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 19:29:17 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/11 19:29:18 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenhay;
	size_t	lenneedle;

	lenneedle = ft_strlen((char*)needle);
	lenhay = ft_strlen((char*)hay);
	i = 0;
	while (i < len && hay[i])
	{
		j = 0;
		while (j <= lenneedle && i + j < len + 1)
		{
			if (needle[j] == '\0')
				return ((char*)&hay[i]);
			if (!(needle[j] == hay[i + j]))
				break ;
			j++;
		}
		i++;
	}
	return (NULL);
}
