//
// Created by xzc on 2025/2/22.
//
#include <stdio.h>
int main(int argc, char *argv[]) {
    // "for" version with argc
    printf("for-by-argc:\n");
    for (int i = 0; i < argc; ++i) {
        printf("%s\n", argv[i]);
    }
    // "for" version with pointers
    printf("for-by-pointer:\n");
    for (char **ptr = argv + 1; *ptr != NULL; ++ptr) {
        printf("%s\n", *ptr);
    }
    // "while" version
    printf("while-by-pointer:\n");
    char **ptr = argv;
    while (*++ptr != NULL) {
        printf("%s\n", *ptr);
    }

    return 0;
}
