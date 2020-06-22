#include <unit-test.h>
#include <stdio.h>
#include <stdlib.h>

const int INDENT_SIZE = 2;

void indent() {
    char *indent_str = (char*) calloc(INDENT_SIZE + 1, sizeof(char));
    int i = 0;
    for (; i < INDENT_SIZE; i++) {
        indent_str[i] = ' ';
    }
    indent_str[i] = '\0';
    printf("%s", indent_str);
    free(indent_str);
}

int test(char *name, int (*fun_ptr)()) {
    printf("%s", name);
    printf("\n");
    (*fun_ptr)();
}

void print_diff(int actual, int expected) {
    indent();
    printf("\033[0;31mACTUAL: %d\n\033[0m", actual);
    indent();
    printf("\033[0;32mEXPECTED: %d\n\033[0m", expected);
    return;
}

int expect(int actual, int expected) {
    if (actual == expected) {
        return 1;
    }

    print_diff(actual, expected);
    return 0;
}