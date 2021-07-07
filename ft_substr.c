/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:17:52 by jumoreau          #+#    #+#             */
/*   Updated: 2021/07/07 17:34:18 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	const char	*ptr;
	size_t		i;

	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	ptr = s;
	i = 0;
	if (len <= 1 || !ptr[start] || start >= ft_strlen(s))
	{
		*sub = '\0';
		return (sub);
	}
	while (ptr[start] != '\0' && i < len)
	{
		sub[i] = ptr[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
