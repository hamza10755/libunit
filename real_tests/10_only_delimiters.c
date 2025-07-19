/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_only_delimiters.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:21:33 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 15:47:34 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"

int	only_delimiters_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f("     ", ' ');
	if (!result)
		return (1);
	if (result[0] != 0x0)
		return (1);
	free_split(result);
	return (0);
}
