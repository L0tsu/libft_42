/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:20:49 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/29 14:47:54 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dest, void *restrict src, int c, size_t num)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	ptr = src;
	ptr1 = dest;
	while (num > 0)
	{
		*ptr1 = *ptr;
		if (*ptr == (unsigned char)c)
			break ;
		ptr++;
		ptr1++;
		num--;
	}
	if (*ptr == (unsigned char)c)
		return (ptr1 + 1);
	return (0);
}
