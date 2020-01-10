/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <rvan-ket@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 15:22:04 by rvan-ket       #+#    #+#                */
/*   Updated: 2019/02/01 14:07:27 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countc(const char *s, char c)
{
	int		counter;
	int		i;

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

static int	get_word_len(char const *str, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str2;

	if (!s)
		return (NULL);
	str2 = (char **)malloc(sizeof(char*) * (ft_countc(s, c) + 1));
	if (str2 == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_countc(s, c))
	{
		k = 0;
		if (!(str2[i] = ft_strnew(get_word_len(&s[j], c) + 1)))
			str2[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str2[i][k++] = s[j++];
		str2[i][k] = '\0';
	}
	str2[i] = 0;
	return (str2);
}
