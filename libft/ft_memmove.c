/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:02:36 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/01 13:36:41 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dst && !src)
	{
		return (dst);
	}
	if (dst < src)
	{
		ft_memcpy(dst, src, n);
		return (dst);
	}
	s = src;
	d = dst;
	while (n--)
	{
		d[n] = s[n];
	}
	return (dst);
}
