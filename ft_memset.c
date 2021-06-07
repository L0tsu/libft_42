/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:18:59 by jumoreau          #+#    #+#             */
/*   Updated: 2021/05/16 10:51:01 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(void *src, int value, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = src;
	while (i < size)
	{
		ptr[i] = value;
		i++;
	}
	return (src);
}
