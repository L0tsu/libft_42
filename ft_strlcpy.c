/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:22:48 by jumoreau          #+#    #+#             */
/*   Updated: 2021/07/07 18:19:12 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*ptr;

	ptr = src;
	if (!size || !ptr)
		return (ft_strlen(src));
	while (size > 1 && *ptr)
	{
		*dst = *ptr;
		size--;
		dst++;
		ptr++;
	}
	*dst = '\0';
	dst = &dst[0];
	return (ft_strlen(src));
}
