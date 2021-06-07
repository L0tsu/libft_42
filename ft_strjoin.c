/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:11:30 by jumoreau          #+#    #+#             */
/*   Updated: 2021/05/14 14:29:11 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ptr;

	str = malloc(ft_strlen(s1) + ft_strlen(s2));
	ptr = str;
	if (str == 0)
		return (NULL);
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (*s2)
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';
	return (&str[0]);
}
