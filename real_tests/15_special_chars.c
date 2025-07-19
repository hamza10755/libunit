/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_special_chars.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:21:45 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 15:47:56 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"

int	special_chars_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f("@#$%^&*()_+-=[]{}|;':\",./<>?", '_');
	if (!result)
		return (1);
	if (!result[0] || ft_strncmp(result[0], "@#$%^&*()", 10) != 0)
		return (1);
	if (!result[1] || ft_strncmp(result[1], "+-=[]{}|;':\",./<>?", 20) != 0)
		return (1);
	if (result[2] != 0x0)
		return (1);
	free_split(result);
	return (0);
}
