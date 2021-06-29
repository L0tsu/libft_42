/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:21:03 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/29 15:29:55 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int value, size_t num)
{
	char	*ptr;

	ptr = str;
	while (num > 0)
	{
		if (*ptr == value || !*ptr)
			break ;
		ptr++;
		num--;
	}
	if (*ptr == value && num > 0)
		return (ptr);
	else if (*ptr && num > 0)
		return (ptr);
	return (0);
}
