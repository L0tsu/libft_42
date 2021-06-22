/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotus <lotus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:19:05 by lotus             #+#    #+#             */
/*   Updated: 2021/06/21 12:48:24 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*p;

	if (!*lst)
		return ;
	tmp = *lst;
	p = *lst;
	while (p != NULL)
	{
		tmp = p->next;
		ft_lstdelone(p, del);
		p = tmp;
	}
	*lst = NULL;
}
