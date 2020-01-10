/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstaddback.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-ket <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/23 16:39:41 by rvan-ket      #+#    #+#                 */
/*   Updated: 2019/01/23 16:39:41 by rvan-ket      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *node)
{
	t_list	*lst;

	lst = *alst;
	if (lst == NULL)
		*alst = node;
	else
	{
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = node;
	}
}
