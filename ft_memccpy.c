/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:20:49 by jumoreau          #+#    #+#             */
/*   Updated: 2021/05/16 10:50:39 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memccpy(void *restrict dest, void *restrict src, int c, size_t num)
{
	char	*ptr;
	char	*ptr1;

	ptr = src;
	ptr1 = dest;
	while (*ptr != c && num > 0)
	{
		if (!*ptr1)
			break ;
		ptr++;
		ptr1++;
		num--;
	}
	if (*ptr && num > 0)
		return (ptr1 + 1);
	return (0);
}
