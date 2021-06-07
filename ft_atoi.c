/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:16:32 by jumoreau          #+#    #+#             */
/*   Updated: 2021/06/04 14:19:40 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	final;
	int	n;

	final = 0;
	n = 1;
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
