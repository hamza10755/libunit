#include "../include/libunit.h"

static t_unit_test *add_node(t_unit_test **test_list, const char *test_name, const char *test_fun, int (*f)(char **(*f)(const char *, char)))
{
    t_unit_test *new_node = malloc(sizeof(t_unit_test));
    t_unit_test *cursor;
    if (!new_node)
        return NULL;
    new_node->verbose = 0;
    new_node->test_name = test_name;
    new_node->f = f;
    new_node->test_fun = test_fun;
    new_node->next = NULL;
    if (!test_list || !*test_list)
    {
        *test_list = new_node;
        return new_node;
    }
    cursor = *test_list;
    while (cursor->next)
        cursor = cursor->next;
    cursor->next = new_node;
    return new_node;
}

void free_list(t_unit_test *list)
{
    t_unit_test *cur = list;
    t_unit_test *tmp;
    while (cur)
    {
        tmp = cur->next;
        free(cur);
        cur = tmp;
    }
}

//int (*f)(void)
void load_test(t_unit_test **test_list, const char *test_name, const char *test_fun, int (*f)(char **(*f)(const char *, char)))
{
    if (add_node(test_list, test_name, test_fun, f) == NULL)
    {
        if (test_list)
            free_list(*test_list);
        exit(1);
    }
} 
