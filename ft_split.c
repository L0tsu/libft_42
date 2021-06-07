/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotus <lotus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 09:15:12 by lotus             #+#    #+#             */
/*   Updated: 2021/06/03 13:56:20 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ftsplitl(char const *s, char c, int i)
{
	int	lenght;
	int	tmp;

	tmp = 0;
	lenght = 0;
	if (tmp == i)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			lenght++;
		}
	}
	else
	{
		while (*s != c)
			s++;
		tmp++;
	}
	return (lenght + 1);
}

static int	splitcount(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s == c && *s)
		{
			while (*s == c && *s)
			{
				s++;
				if (!*s)
					return (i);
			}
			i++;
		}
		else
			s++;
	}
	return (i);
}

static char	*ft_strcpy(char *tab, const char *s, char c)
{
	while (*s == c && *s)
		s++;
	while (*s != c && *s)
	{
		*tab = *s;
		s++;
		tab++;
	}
	*tab = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		sc;
	int		i;

	i = 0;
	sc = splitcount(s, c) + 2;
	str = (char **)malloc(sc * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (i < sc - 1)
	{
		*(str + i) = (char *)malloc(ftsplitl(s, c, i) * sizeof(char *));
		ft_strcpy(str[i], s, c);
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
			s++;
		i++;
	}
	return (str);
}
