/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/20 17:29:58 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/20 17:29:58 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	if (!alst || !del)
		return ;
	while (*alst)
	{
		temp = (*alst)->next;
		ft_lstdelone(alst, del);
		(*alst) = temp;
	}
	alst = NULL;
}
