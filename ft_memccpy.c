/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:20:49 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/07 13:52:45 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memccpy(void *restrict dest, void *restrict src, int c, size_t num)
{
	char	*ptr;
	char	*ptr1;

	ptr = src;
	ptr1 = dest;
	while ((*ptr && *ptr1) && num > 0)
	{
		*ptr1 = *ptr;
		if (*ptr == c)
			break ;
		ptr++;
		ptr1++;
		num--;
	}
	if (*ptr == c)
		return (ptr1 + 1);
	return (0);
}
