/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_countwords.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/23 16:38:11 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/02/01 14:27:52 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_countwords(const char *s, char c)
{
	int counter;
	int i;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			counter++;
		}
		else
			i++;
	}
	return (counter);
}
