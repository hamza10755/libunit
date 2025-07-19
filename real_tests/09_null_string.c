/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_null_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:39:41 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 15:47:32 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"

int	null_string_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f(0x0, ' ');
	if (result != 0x0)
		return (1);
	return (0);
}
