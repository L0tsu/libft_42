/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:18:42 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/14 08:51:11 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	str += i;
	if (*str == c)
		return (str);
	str--;
	while (*str && i-- != 0)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (0);
}
