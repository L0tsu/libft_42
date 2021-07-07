/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotus <lotus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 09:15:12 by lotus             #+#    #+#             */
/*   Updated: 2021/07/07 17:58:47 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ftsplitl(char const *s, char c)
{
	int	lenght;

	lenght = 0;
	while (*s == c && *s)
		s++;
	while (*s != c && *s)
	{
		s++;
		lenght++;
	}
	return (lenght + 1);
}

static int	onlyccheck(char const *s, char c)
{
	while (*s == c)
		s++;
	if (!*s)
		return (0);
	return (1);
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

static char	*ft_splitcpy(char *tab, const char *s, char c)
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
	if (!str)
		return (NULL);
	if (onlyccheck(s, c) == 0)
		return (str);
	while (i < sc - 1)
	{
		*(str + i) = (char *)malloc(ftsplitl(s, c) * sizeof(char *));
		if (!*str)
			return (NULL);
		ft_splitcpy(str[i], s, c);
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
			s++;
		i++;
	}
	return (str);
}
