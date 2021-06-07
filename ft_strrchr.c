/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:18:42 by jumoreau          #+#    #+#             */
/*   Updated: 2021/05/14 10:37:53 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	while (*str)
		str++;
	str--;
	while (*str)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (0);
}
