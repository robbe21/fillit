/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 16:59:15 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/15 16:59:15 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int c)
{
	if (c == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (c < 0)
	{
		ft_putchar('-');
		ft_putnbr(-c);
		return ;
	}
	if (c > 9)
	{
		ft_putnbr(c / 10);
		ft_putchar((c % 10) + 48);
	}
	else
		ft_putchar(c + 48);
}
