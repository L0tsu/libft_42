/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:21:03 by jumoreau          #+#    #+#             */
/*   Updated: 2021/05/16 10:50:45 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(void *str, int value, size_t num)
{
	char	*ptr;

	ptr = str;
	while (*ptr != value && num > 0)
	{
		ptr++;
		num--;
	}
	if (*ptr && num > 0)
		return (ptr);
	return (0);
}
