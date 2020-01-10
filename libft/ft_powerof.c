/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_powerof.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/23 16:29:04 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/02/01 14:28:49 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_powerof(int nb, int power)
{
	if (power == 0)
		return (1);
	else
		return (nb * ft_powerof(nb, power - 1));
}
