/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:17:50 by jumoreau          #+#    #+#             */
/*   Updated: 2021/07/07 16:56:11 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str1, size_t n)
{
	const char	*ptr;

	if (!*str1)
		return ((char *)str);
	while (*str && n > 0)
	{
		if (*str1 == *str && n > 0)
		{
			ptr = str;
			break ;
		}
		n--;
		str++;
	}
	while (*str1 == *str && n > 0 && *str1)
	{
		str++;
		str1++;
		n--;
	}
	if (!*str1)
		return ((char *)ptr);
	return (0);
}
