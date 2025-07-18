/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:18:27 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/01 14:45:35 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

static int	check(size_t p, const char *little, size_t len)
{	
	int		le;

	le = ft_strlen(little);
	if (p > (len - le))
		return (0);
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		x;
	size_t	p;

	p = 0;
	if (*little == '\0' || big == little)
		return ((char *)big);
	if (ft_strlen(little) > len && big[0] != '\0')
		return (NULL);
	while (*big)
	{
		i = 0;
		x = 0;
		while (big[i++] == little[x] && len != 0)
		{
			x++;
			if (check(p, little, len) <= 0)
				return (NULL);
			if (little[x] == '\0')
				return ((char *)big);
		}
		p++;
		big++;
	}
	return (NULL);
}
