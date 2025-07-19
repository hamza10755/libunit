/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:50:28 by hbelaih           #+#    #+#             */
/*   Updated: 2024/08/28 15:41:08 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"
#include	<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*l;

	l = (char *)s;
	while (*l != '\0')
	{
		if (*l == (char)c)
		{
			return (l);
		}
		l++;
	}
	if ((char)c == '\0')
	{
		return (l);
	}
	return (NULL);
}
