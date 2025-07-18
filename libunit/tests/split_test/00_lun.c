#include "../split_test.h"
int launcher_split(char **(*f)(const char *, char))
{
    t_unit_test *test_list = NULL;
    load_test(&test_list, "basic", &basic_split_test);
    load_test(&test_list, "null", &null_string_test);
    load_test(&test_list, "empty", &empty_string_test);
    load_test(&test_list, "start_with_del", &start_with_del_test);
    load_test(&test_list, "end_with_del", &end_with_del_test);
    load_test(&test_list, "start_end_with_del", &start_end_with_del_test);
    load_test(&test_list, "only_delimiters", &only_delimiters_test);
    load_test(&test_list, "multiple_delimiters", &multiple_delimiters_test);
    load_test(&test_list, "multiple_delimiters_word", &multiple_delimiters_word_test);
    load_test(&test_list, "multiple_word", &multiple_word_test);
    load_test(&test_list, "same_string", &same_string_test);
    load_test(&test_list, "long_string", &long_string_test);
    load_test(&test_list, "special_chars", &special_chars_test);
    load_test(&test_list, "single_char", &single_char_test);
    load_test(&test_list, "different_delimiter", &different_delimiter_test);
    main_launcher(test_list, f);
    free_list(test_list);
    return 0;
}
