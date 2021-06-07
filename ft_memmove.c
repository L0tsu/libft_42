/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:21:17 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/07 15:13:30 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *to, const void *from, size_t size)
{
	unsigned char	*ptr;
	const char		*ptr1;
	size_t				i;

	i = 0;
	ptr = to;
	ptr1 = from;
	while (i != size)
	{
		ptr[i] = ptr1[i];
		i++;
	}
	return (to);
}
