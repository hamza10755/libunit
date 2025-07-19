/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:42:46 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/01 12:49:04 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*l;

	l = (unsigned char *)s;
	c = (unsigned char)c;
	while (n && *l != c)
	{
		l++;
		n--;
	}
	if (n)
	{
		return ((void *)l);
	}
	else
	{
		return (NULL);
	}
}
