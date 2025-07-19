/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_multiple_word.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:21:09 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 15:47:09 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"

int	multiple_word_test(char **(*f)(const char *, char))
{
	char	**result;

	result = f("Hello, World! This is a test.", ' ');
	if (!result)
		return (1);
	if (!result[0] || ft_strncmp(result[0], "Hello,", 6) != 0)
		return (1);
	if (!result[1] || ft_strncmp(result[1], "World!", 7) != 0)
		return (1);
	if (!result[2] || ft_strncmp(result[2], "This", 5) != 0)
		return (1);
	if (!result[3] || ft_strncmp(result[3], "is", 3) != 0)
		return (1);
	if (!result[4] || ft_strncmp(result[4], "a", 2) != 0)
		return (1);
	if (!result[5] || ft_strncmp(result[5], "test.", 6) != 0)
		return (1);
	if (result[6] != 0x0)
		return (1);
	free_split(result);
	return (0);
}
