/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:15:18 by hbelaih           #+#    #+#             */
/*   Updated: 2024/08/29 17:23:56 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*l;
	unsigned char	*s;
	size_t			i;

	l = (unsigned char *)s1;
	s = (unsigned char *)s2;
	i = 0;
	if (n < 1)
	{
		return (0);
	}
	while (l[i] != '\0' && s[i] != '\0' && i < n)
	{
		if (l[i] - s[i] != 0)
		{
			return (l[i] - s[i]);
		}
		i++;
	}
	if (i == n)
	{
		i--;
	}
	return (l[i] - s[i]);
}
