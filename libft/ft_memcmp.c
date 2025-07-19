/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:37:35 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/01 13:52:46 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*l;
	const unsigned char	*d;

	l = (unsigned char *)s1;
	d = (unsigned char *)s2;
	while (n--)
	{
		if (*l != *d)
		{
			return (*l - *d);
		}
		l++;
		d++;
	}
	return (0);
}
