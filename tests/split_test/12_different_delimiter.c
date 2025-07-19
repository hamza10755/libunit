/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_different_delimiter.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:21:38 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 12:38:05 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "splitTest.h"

int	different_delimiter_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f("apple,banana,cherry", ',');
	if (!result)
		return (1);
	if (!result[0] || ft_strncmp(result[0], "apple", 6) != 0)
		return (1);
	if (!result[1] || ft_strncmp(result[1], "banana", 7) != 0)
		return (1);
	if (!result[2] || ft_strncmp(result[2], "cherry", 7) != 0)
		return (1);
	if (result[3] != 0x0)
		return (1);
	free_split(result);
	return (0);
}
