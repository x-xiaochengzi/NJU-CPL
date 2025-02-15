#include <stdio.h>

int main(void) {
    int lines = 0;
    printf("Please enter the lines of the stars pyramid: ");
    scanf("%d", &lines);
    for (int i = 0; i < lines; ++i) {
        // print blanks
        for (int j = 0; j < lines - 1 - i; ++j) {
            printf(" ");
        }
        // print stars
        for (int j = 0; j < 2 * i + 1; ++j) {
            printf("*");
        }
        // next line
        printf("\n");
    }
    return 0;
}