/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:30:43 by jumoreau          #+#    #+#             */
/*   Updated: 2021/05/14 19:01:05 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*ptr;
	const char	*ptr2;
	int			x;

	x = ft_strlen(dest);
	ptr = dest;
	ptr2 = src;
	while (*ptr && size > 0)
	{
		ptr++;
		size--;
	}
	if (size <= 0)
		return (x + (ft_strlen(src)));
	while (*ptr2 && size > 0)
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;
		size--;
	}
	return (x + ft_strlen(src));
}
