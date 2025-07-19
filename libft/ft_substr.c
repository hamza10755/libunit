/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:02:02 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/08 13:23:01 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	l;
	size_t	al;
	size_t	i;

	l = ft_strlen(s);
	if (start >= l)
	{
		substr = (char *)malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	al = l - start;
	if (al > len)
		al = len;
	substr = (char *)malloc(al + 1);
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < al)
		substr[i] = s[start + i];
	substr[al] = '\0';
	return (substr);
}
