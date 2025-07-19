/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:50:48 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 16:57:21 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	launcher_lib(char **(*f)(const char *, char))
{
	t_unit_test	*test_list;

	test_list = NULL;
	(void)f;
	load_test(&test_list, "success", "success_test", &test_success);
	load_test(&test_list, "fail", "fail_test", &test_fail);
	load_test(&test_list, "segfault", "segfault_test", &test_segfault);
	load_test(&test_list, "sigbus", "sigbus_test", &test_sigbus);
	main_launcher(test_list, f);
	free_list(test_list);
	return (0);
}
