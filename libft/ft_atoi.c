/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:11:40 by hbelaih           #+#    #+#             */
/*   Updated: 2024/12/28 15:45:59 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	ft_atoi(const char *n)
{
	int	sign;
	int	c;
	int	i;

	sign = 1;
	c = 0;
	i = 0;
	while (ft_isspace(n[i]))
	{
		i++;
	}
	if (n[i] == '-' || n[i] == '+')
	{
		if (n[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (n[i] >= '0' && n[i] <= '9')
	{
		c = c * 10 + (n[i] - '0');
		i++;
	}
	return (c * sign);
}
