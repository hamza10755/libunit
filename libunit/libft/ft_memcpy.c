/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:21:28 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/01 13:00:21 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
	{
		return (dst);
	}
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
