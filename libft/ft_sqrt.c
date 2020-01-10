/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/23 15:59:09 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/02/16 20:29:21 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	r;

	i = 1;
	r = 0;
	if (nb == 1 || nb == 0)
		return (nb);
	while (r < nb)
	{
		r = i * i;
		i++;
	}
	if (r == nb)
		return (i - 1);
	return (0);
}
