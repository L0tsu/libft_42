/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:21:17 by jumoreau          #+#    #+#             */
/*   Updated: 2021/05/16 10:50:56 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *to, const void *from, size_t size)
{
	unsigned char	*ptr;
	const char		*ptr1;

	ptr = to;
	ptr1 = from;
	while (*ptr && *ptr1 && size != 0)
	{
		*ptr = *ptr1;
		ptr++;
		ptr1++;
		size--;
	}
	return (to);
}
