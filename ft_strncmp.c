/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:16:48 by jumoreau          #+#    #+#             */
/*   Updated: 2021/05/14 10:36:54 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str1, size_t n)
{
	while (*str == *str1 && n > 0)
	{
		str++;
		str1++;
		n--;
	}
	return (*str - *str1);
}
