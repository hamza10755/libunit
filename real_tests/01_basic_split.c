/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:21:04 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 15:47:06 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"

int	basic_split_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f("Hello World", ' ');
	if (!result)
		return (1);
	if (!result[0] || ft_strncmp(result[0], "Hello", 5) != 0)
		return (1);
	if (!result[1] || ft_strncmp(result[1], "World", 5) != 0)
		return (1);
	if (result[2] != 0x0)
		return (1);
	free_split(result);
	return (0);
}
