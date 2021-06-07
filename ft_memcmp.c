/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:22:31 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/07 14:49:30 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *ptr, void *ptr1, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;

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
	if (*str > *str1 && n > 0)
		return (1);
	if (*str < *str1 && n > 0)
		return (-1);
	return (0);
}
