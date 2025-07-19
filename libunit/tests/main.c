#include "./lib/lib_tests.h"
#include "./split_test/split_test.h"
#include "../framework/include/libunit.h"
int main(void) {
    launcher_lib(ft_split);
    launcher_split(ft_split);
    return 0;
} 