/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:22:25 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 13:10:22 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static void	print_test_result(t_unit_test *test, int status)
{
	int	signal_num;

	write(1, test->test_fun, ft_strlen(test->test_fun));
	write(1, " : ", 3);
	write(1, test->test_name, ft_strlen(test->test_name));
	write(1, " : ", 3);
	if (WIFSIGNALED(status))
	{
		signal_num = WTERMSIG(status);
		if (signal_num == SIGSEGV)
			write(1, "SIGSEGV\n", 8);
		else if (signal_num == SIGBUS)
			write(1, "SIGBUS\n", 7);
	}
	else if (!status)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

void	main_launcher(t_unit_test *list, char **(*f)(const char *, char))
{
	pid_t	pid;
	int		status;
    int     ex;
    t_unit_test *head;

    head = list;
	while (list)
	{
		pid = fork();
		if (pid == 0)
        {
            ex = list->f(f);
            free_list(head);
			exit(ex);
        }    
        else
		{
			wait(&status);
			print_test_result(list, status);
		}
		list = list->next;
	}
}
