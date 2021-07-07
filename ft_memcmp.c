/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:22:31 by jumoreau          #+#    #+#             */
/*   Updated: 2021/07/06 20:41:53 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr, const void *ptr1, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;
	size_t			x;

	str = (unsigned char *) ptr;
	str1 = (unsigned char *) ptr1;
	if (n > sizeof(ptr1))
		x = sizeof(ptr1);
	else if (n > sizeof(ptr1))
		x = sizeof(ptr1);
	else
		x = n;
	if (x < 1)
		return (0);
	while ((*str == *str1) && (x > 0) && (*str != 0 || *str1 != 0))
	{
		str++;
		str1++;
		x--;
		if (!*str || !*str1)
			break ;
	}
	if (x > 0)
		return (*str - *str1);
	return (0);
}
