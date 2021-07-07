/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:22:31 by jumoreau          #+#    #+#             */
/*   Updated: 2021/07/07 16:17:05 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr, const void *ptr1, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;
	size_t			x;

	x = 0;
	str = (unsigned char *) ptr;
	str1 = (unsigned char *) ptr1;
	while (x == 0 && n != 0)
	{
		x = *str - *str1;
		str++;
		str1++;
		n--;
	}
	return (x);
}
