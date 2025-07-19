/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:59:52 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 12:59:53 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <unistd.h>

typedef struct s_unit_test
{
	int					verbose;
	int					(*f)(char **(*f)(const char *, char));
	const char			*test_name;
	const char			*test_fun;
	struct s_unit_test	*next;
}						t_unit_test;

void					free_list(t_unit_test *list);
void					load_test(t_unit_test **test_list,
							const char *test_name, const char *test_fun,
							int (*f)(char **(*f)(const char *, char)));
void					main_launcher(t_unit_test *list,
							char **(*f)(const char *, char));

#endif