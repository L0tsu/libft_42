/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotus <lotus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:56:38 by lotus             #+#    #+#             */
/*   Updated: 2021/06/21 13:26:38 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	lst = f(lst);
	while (lst->next)
	{
		lst++;
		if (!lst)
		{
			del(lst->content);
			lst = lst->next;
		}
	}
	return (&lst[0]);
}
