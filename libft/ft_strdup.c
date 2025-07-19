/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:54:02 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/01 14:09:33 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	len;
	size_t	i;

	len = ft_strlen(s) + 1;
	dst = malloc (len);
	i = 0;
	if (!dst)
	{
		return (NULL);
	}
	while (i < len)
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}
