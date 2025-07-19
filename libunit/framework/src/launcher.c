#include "../include/libunit.h"

int ft_strlen(const char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

void main_launcher(t_unit_test *list, char **(*f)(const char *, char))
{
    pid_t pid;
    int status;
    int signal_num;
    while (list) {
        pid = fork();
        if (pid == 0)
            exit(list->f(f));
        else {
            wait(&status);
            write(1, list->test_name, ft_strlen(list->test_name));
            write(1, " : ", 3);
            write(1, list->test_fun, ft_strlen(list->test_fun));
            write(1, " : ", 3);
            if (WIFSIGNALED(status)) {
                signal_num = WTERMSIG(status);
                if (signal_num == SIGSEGV)
                    write(1, "SIGSEGV\n", 8);
                else if (signal_num == SIGBUS)
                    write(1, "SIGBUS\n", 7);
            } else if (!status)
                write(1, "OK\n", 3);
            else
                write(1, "KO\n", 3);
        }
        list = list->next;
    }
} 