/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:22:31 by jumoreau          #+#    #+#             */
/*   Updated: 2021/05/16 11:21:18 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr, const void *ptr1, size_t n)
{
	const char	*str;
	const char	*str1;

	str = ptr;
	str1 = ptr1;
	if (n < 1)
		return (0);
	while (*str == *str1 && n > 0)
	{
		str++;
		str1++;
		n--;
	}
	if (*str - *str1 > 0)
		return (1);
	else if (*str - *str1 < 0)
		return (-1);
	return (0);
}
