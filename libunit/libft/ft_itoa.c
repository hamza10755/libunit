/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:21:17 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/03 18:44:00 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	getlen(int c)
{
	int	len;

	if (c <= 0)
		len = 1;
	else
		len = 0;
	while (c != 0)
	{
		c = c / 10;
		len++;
	}
	return (len);
}

char	*fillnumber(int n, int c)
{
	char	*s;

	s = malloc(c + 1);
	if (s == NULL)
		return (NULL);
	s[c] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		s[--c] = (n % 10) + '0';
		n = n / 10;
	}
	if (s[0] != '-' && c == 1)
		s[0] = '0';
	return (s);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	len = getlen(n);
	res = fillnumber(n, len);
	if (!res)
	{
		return (NULL);
	}
	return (res);
}
