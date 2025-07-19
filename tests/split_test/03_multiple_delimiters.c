/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_multiple_delimiters.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:21:13 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 12:38:27 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "splitTest.h"

int	multiple_delimiters_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f("Hello,    World!", ' ');
	if (!result)
		return (1);
	if (!result[0] || ft_strncmp(result[0], "Hello,", 6) != 0)
		return (1);
	if (!result[1] || ft_strncmp(result[1], "World!", 7) != 0)
		return (1);
	if (result[2] != 0x0)
		return (1);
	free_split(result);
	return (0);
}
