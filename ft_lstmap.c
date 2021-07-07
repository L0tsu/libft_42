/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotus <lotus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:56:38 by lotus             #+#    #+#             */
/*   Updated: 2021/07/07 18:16:12 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*lst_alloc_fails(t_list *head, void (*del)(void *))
{
	if (head && del)
		ft_lstclear(&head, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*curr;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	curr = head;
	while (lst->next)
	{
		lst = lst->next;
		curr->next = ft_lstnew(f(lst->content));
		if (!curr->next)
			return (lst_alloc_fails(head, del));
		curr = curr->next;
	}
	return (head);
}
