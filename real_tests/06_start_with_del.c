/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_start_with_del.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:21:21 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 15:47:23 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"

int	start_with_del_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f("    Hello,", ' ');
	if (!result)
		return (1);
	if (!result[0] || ft_strncmp(result[0], "Hello,", 6) != 0)
		return (1);
	if (result[1] != 0x0)
		return (1);
	free_split(result);
	return (0);
}
