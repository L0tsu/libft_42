/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:46:01 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/17 13:20:53 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	itrim(char const s1, const char *set)
{
	while (*set)
	{
		if (s1 == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, const char *set)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (itrim(s1[i], set) == 1)
		i++;
	while (itrim(s1[j], set) == 1)
		j--;
	j -= i - 1;
	if (i == ft_strlen(s1))
		return (ft_substr(s1, 0, 0));
	return (ft_substr(s1, i, j));
}
