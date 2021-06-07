/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:57:53 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/03 14:43:09 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*str;
	char		*ptr;
	const char	*ptr2;

	str = (char *)malloc(sizeof(char) * ft_strlen(s));
	ptr = str;
	ptr2 = s;
	if (str == NULL)
		return (NULL);
	while (*ptr2)
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;
	}
	return (str);
}
