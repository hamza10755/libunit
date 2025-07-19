/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_empty_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:21:26 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 12:38:14 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "splitTest.h"

int	empty_string_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f("", ' ');
	if (!result)
		return (1);
	if (result[0] != 0x0)
		return (1);
	free_split(result);
	return (0);
}
