/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_single_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:21:35 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 12:38:07 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "splitTest.h"

int	single_char_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f("a", ' ');
	if (!result)
		return (1);
	if (!result[0] || ft_strncmp(result[0], "a", 2) != 0)
		return (1);
	if (result[1] != 0x0)
		return (1);
	free_split(result);
	return (0);
}
