/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:39:19 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/01 17:36:11 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_lencheck(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;

	len1 = 0;
	len2 = 0;
	if (s1)
		len1 = ft_strlen(s1);
	if (s2)
		len2 = ft_strlen(s2);
	return (len1 + len2);
}

static char	*ft_allocate_memory(size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(size);
	if (!ptr)
		return (NULL);
	return (ptr);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	size_t	total_len;
	size_t	i;
	size_t	j;

	total_len = ft_lencheck(s1, s2) + 1;
	result = ft_allocate_memory(total_len);
	if (!result)
		return (NULL);
	i = -1;
	if (s1)
	{
		while (s1[++i] != '\0')
			result[i] = s1[i];
	}
	j = -1;
	if (s2)
	{
		while (s2[++j] != '\0')
			result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}
