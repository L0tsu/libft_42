/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotus <lotus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:13:22 by lotus             #+#    #+#             */
/*   Updated: 2021/06/14 09:33:40 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numsize(int x)
{
	int	d;

	d = 0;
	if (x < 0)
	{
		x = -x;
		d++;
	}
	while (x >= 10)
	{
		x = x / 10;
		d++;
	}
	return (d);
}

static char	*convertitoa(char *tab, int n, int d)
{
	if (n < 10)
	{
		tab[d] = n + 48;
		return (tab);
	}
	if (n == 10)
	{
		tab[d] = '0';
		d--;
		tab[d] = '1';
	}
	if (n > 10)
	{
		while (n != 0)
		{
			tab[d] = (n % 10) + 48;
			n = (n - n % 10) / 10;
			d--;
		}
	}
	return (tab);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		d;
	int		t;

	t = 0;
	d = numsize(n);
	tab = (char *)malloc(sizeof(char) * d + 1);
	if (tab == NULL)
		return (NULL);
	if (n == -2147483648)
		return (tab = "-2147483648\0");
	tab[d + 1] = '\0';
	if (n < 0)
	{
		n = -n;
		tab[0] = '-';
	}
	convertitoa(tab, n, d);
	return (tab);
}
