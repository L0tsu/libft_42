/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:30:43 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/10 14:18:08 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*ptr;
	const char	*ptr2;
	size_t		destlen;

	ptr = dest;
	ptr2 = src;
	destlen = ft_strlen(dest);
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
