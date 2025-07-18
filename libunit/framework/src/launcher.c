#include "../include/libunit.h"

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
            // write thr test fun : teat name : status 
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