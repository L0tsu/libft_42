/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:21:17 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/29 14:49:34 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *to, const void *from, size_t size)
{
	char			*ptr;
	const char		*ptr1;

	ptr = to;
	ptr1 = from;
	if (!to && !from)
		return (NULL);
	if (ptr < ptr1)
		while (size-- > 0)
			*ptr++ = *ptr1++;
	else
		while (size-- > 0)
			ptr[size] = ptr1[size];
	return (to);
}
