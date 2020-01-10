/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 15:10:34 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/14 15:10:35 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t l;

	if (!s)
		return ;
	l = ft_strlen(s);
	ft_memset(s, '\0', l);
}
