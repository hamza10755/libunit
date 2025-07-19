/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_same_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:21:40 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 15:47:50 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"

int	same_string_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f("hello", ' ');
	if (!result)
		return (1);
	if (!result[0] || ft_strncmp(result[0], "hello", 6) != 0)
		return (1);
	if (result[1] != 0x0)
		return (1);
	free_split(result);
	return (0);
}
