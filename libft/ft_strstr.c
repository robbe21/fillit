/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 18:49:16 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/11 18:49:16 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *needle)
{
	long i;
	long j;
	long lenhay;
	long lenneedle;

	lenneedle = ft_strlen((char*)needle);
	lenhay = ft_strlen((char*)hay);
	i = 0;
	while (i <= lenhay - lenneedle)
	{
		j = 0;
		while (j <= lenneedle)
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
