/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_long_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:21:43 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 15:47:53 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"

static int	check_split_result(char **result)
{
	if (!result[0] || ft_strncmp(result[0], "one", 4) != 0)
		return (1);
	if (!result[1] || ft_strncmp(result[1], "two", 4) != 0)
		return (1);
	if (!result[2] || ft_strncmp(result[2], "three", 6) != 0)
		return (1);
	if (!result[3] || ft_strncmp(result[3], "four", 5) != 0)
		return (1);
	if (!result[4] || ft_strncmp(result[4], "five", 5) != 0)
		return (1);
	if (!result[5] || ft_strncmp(result[5], "six", 4) != 0)
		return (1);
	if (!result[6] || ft_strncmp(result[6], "seven", 6) != 0)
		return (1);
	if (!result[7] || ft_strncmp(result[7], "eight", 5) != 0)
		return (1);
	if (!result[8] || ft_strncmp(result[8], "nine", 5) != 0)
		return (1);
	if (!result[9] || ft_strncmp(result[9], "ten", 4) != 0)
		return (1);
	if (result[10] != 0x0)
		return (1);
	return (0);
}

int	long_string_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f("one two three four five six seven eight nine ten", ' ');
	if (!result)
		return (1);
	if (check_split_result(result))
	{
		free_split(result);
		return (1);
	}
	free_split(result);
	return (0);
}
