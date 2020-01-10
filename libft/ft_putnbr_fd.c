/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 17:21:30 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/15 17:21:30 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	if (c == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
		return ;
	}
	if (c < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-c, fd);
		return ;
	}
	if (c > 9)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putchar_fd((c % 10) + 48, fd);
	}
	else
		ft_putchar_fd(c + 48, fd);
}
