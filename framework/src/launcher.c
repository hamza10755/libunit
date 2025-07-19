/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:22:25 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 17:52:46 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"

static void	print_test_result(t_unit_test *test, int status, t_help *help)
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
			write(1, "[SIGSEGV]\n", 10);
		else if (signal_num == SIGBUS)
			write(1, "[SIGBUS]\n", 9);
	}
	else if (!status)
	{
		write(1, "[OK]\n", 5);
		help->ok++;
	}
	else
		write(1, "[KO]\n", 5);
}

static void	run_single_test(t_unit_test *test, t_unit_test *head,
		t_help *help, char **(*f)(const char *, char))
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid == 0)
	{
		help->ex = test->f(f);
		free_list(head);
		exit(help->ex);
	}
	else
	{
		wait(&status);
		print_test_result(test, status, help);
	}
}

static void	print_summary(t_help *help)
{
	ft_putnbr_fd(help->ok, 1);
	ft_putstr_fd("/", 1);
	ft_putnbr_fd(help->total, 1);
	ft_putstr_fd(" tests checked\n", 1);
}

void	main_launcher(t_unit_test *list, char **(*f)(const char *, char))
{
	t_unit_test	*head;
	t_help		help;

	head = list;
	help.ok = 0;
	help.total = 0;
	while (list)
	{
		help.total++;
		run_single_test(list, head, &help, f);
		list = list->next;
	}
	print_summary(&help);
}
