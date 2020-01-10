/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 16:45:21 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/01/31 17:11:12 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*makestring(char *c, int i, int n, int sign)
{
	if (sign == 1)
	{
		c[0] = '-';
		i++;
	}
	i++;
	c[i] = '\0';
	i--;
	while (i >= sign)
	{
		c[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (c);
}

char		*ft_itoa(int n)
{
	int		a;
	int		sign;
	int		i;
	char	*c;

	i = 0;
	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	a = n;
	while (a > 9)
	{
		a = a / 10;
		i++;
	}
	c = (char*)malloc(sizeof(char) * i + sign + 2);
	if (!c)
		return (NULL);
	return (makestring(c, i, n, sign));
}
