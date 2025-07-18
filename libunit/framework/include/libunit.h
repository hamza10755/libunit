#ifndef LIBUNIT_H
#define LIBUNIT_H

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
# include <sys/stat.h>
# include <unistd.h>

typedef struct s_unit_test {
    int verbose;
    int (*f)(void);
    const char *test_name;
    struct s_unit_test *next;
} t_unit_test;

void free_list(t_unit_test *list);
void load_test(t_unit_test **test_list, const char *test_name, int (*f)(void));
void main_launcher(t_unit_test *list);

#endif