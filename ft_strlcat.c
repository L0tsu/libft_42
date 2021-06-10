/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:30:43 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/10 16:37:37 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	checkdest(char *dest, size_t size)
{
	if (sizeof(dest) > size)
		return (1);
	return (0);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*ptr;
	const char	*ptr2;
	size_t		destlen;

	ptr = dest;
	ptr2 = src;
	destlen = ft_strlen(dest);
	if (size <= 1 || checkdest(dest, size) == 1)
		return (ft_strlen(src) + size);
	while (*ptr && size > 0)
	{
		ptr++;
		size--;
	}
	while (*ptr2 && size > 1)
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;
		size--;
	}
	*ptr = '\0';
	return (destlen + ft_strlen(src));
}
