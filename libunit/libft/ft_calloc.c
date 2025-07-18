/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:10:22 by hbelaih           #+#    #+#             */
/*   Updated: 2024/09/01 14:15:54 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*l;

	l = malloc(n * size);
	if (!l)
	{
		return (NULL);
	}
	ft_bzero(l, n * size);
	return (l);
}
