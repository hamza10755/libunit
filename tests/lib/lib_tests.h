/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:55:04 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 12:55:05 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_TESTS_H
# define LIB_TESTS_H
# include "../framework/include/libunit.h"
# include "../libft/libft.h"

int	test_success(char **(*f)(const char *, char));
int	test_fail(char **(*f)(const char *, char));
int	test_segfault(char **(*f)(const char *, char));
int	test_sigbus(char **(*f)(const char *, char));
int	launcher_lib(char **(*f)(const char *, char));
#endif