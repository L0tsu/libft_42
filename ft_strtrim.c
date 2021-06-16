/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:46:01 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/16 14:14:19 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim_tail(const char *s1, const char *set, int ptr)
{
	int	i;

	i = 0;
	while (s1[i + ptr] != *set && s1[i + ptr])
		i++;
	return (i);
}

static int	trim_head(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		while (s1[i] == *set)
			i++;
		set++;
		if (!*set)
			set = &set[0];
	}
	return (i);
}

char	*ft_strtrim(char const *s1, const char *set)
{
	int	i;
	int	j;

	i = trim_head(s1, set);
	j = trim_tail(s1, set, i);
	printf("%d - %d", i ,j);
	return (ft_substr(s1, i, j));
}
