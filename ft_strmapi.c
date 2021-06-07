/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:15:28 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/03 15:55:04 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(s));
	if (tab == NULL)
		return (NULL);
	while (*s)
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
