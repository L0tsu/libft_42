/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:16:48 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/29 14:39:20 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	returnvalue(const char *str, const char *str1, size_t n)
{
	unsigned char	i;
	unsigned char	j;

	i = *str;
	j = *str1;
	if (i > j && n)
		return (1);
	if (i < j && n)
		return (-1);
	return (0);
}

int	ft_strncmp(const char *str, const char *str1, size_t n)
{
	if (n > 0)
	{
		while (*str == *str1 && n && *str && *str1)
		{
			str++;
			str1++;
			n--;
		}
	}
	return (returnvalue(str, str1, n));
}
