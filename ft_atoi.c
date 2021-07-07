/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:16:32 by jumoreau          #+#    #+#             */
/*   Updated: 2021/07/07 17:18:16 by jumoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	atoilen(const char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		n = n * -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		str++;
		i++;
	}
	if (i * n >= 26)
		return (-1);
	if (i * n <= -26)
		return (0);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	long long	final;
	long long	n;

	final = 0;
	n = 1;
	if (atoilen(str) < 1)
		return (atoilen(str));
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		n = -n;
	}
	while (*str >= '0' && *str <= '9')
	{
		final = (*str - 48) + (final * 10);
		str++;
	}
	return (final * n);
}
