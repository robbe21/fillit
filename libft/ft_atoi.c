/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 16:56:09 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/11 16:56:10 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int nb;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' ||
	str[i] == '\r' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		nb = (str[i] - 48) + nb * 10;
		i++;
	}
	return (nb * sign);
}
