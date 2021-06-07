/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:22:48 by jumoreau          #+#    #+#             */
/*   Updated: 2021/05/14 10:26:29 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*ptr;

	ptr = src;
	if (size > 1)
	{
		ft_bzero(dst, size);
		while (size - 1 > 0)
		{
			*dst = *ptr;
			size--;
			dst++;
			ptr++;
		}
		*dst = '\0';
		dst -= size - 1;
	}
	return (ft_strlen(src));
}
