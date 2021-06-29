/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:20:16 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/29 14:48:43 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	const char		*ptr;
	unsigned char	*ptr1;

	ptr = src;
	ptr1 = dst;
	if (!ptr && !ptr1)
		return (NULL);
	while (num > 0)
	{
		*ptr1 = *ptr;
		ptr++;
		ptr1++;
		num--;
	}
	return (dst);
}
