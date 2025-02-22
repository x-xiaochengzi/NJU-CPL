//
// Created by xzc on 2025/2/22.
//
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_ints(const int integers[], size_t len);
void print_strs(const char *str[], size_t len);


int compare_ints(const void *left, const void *right);
int compare_strs(const void *left, const void *right);

int main(void) {
    int integers[] = {-2, 99, 0, -743, 2, INT_MAX, 4};
    int size_of_integers = sizeof integers / sizeof integers[0];

    print_ints(integers, size_of_integers);
    //TODO: sort integers using qsort
    qsort(integers, size_of_integers, sizeof integers[0], compare_ints);
    print_ints(integers, size_of_integers);


    const char *names[] = {
        "Luo Dayou",
        "Cui Jian",
        "Dou Wei",
        "Zhang Chu",
        "Wan Qing",
        "Li Zhi",
        "Yao",
        "ZuoXiao",
        "ErShou Rose",
        "Hu Mage"
    };
    int size_of_names = sizeof names / sizeof names[0];
    print_strs(names, size_of_names);
    //TODO: sort names using qsort
    qsort(names, size_of_names, sizeof names[0], compare_strs);
    print_strs(names, size_of_names);
    return 0;
}
void print_ints(const int integers[], size_t len) {
    printf("\n");
    for (int i = 0; i < len; ++i) {
        printf("%d ", integers[i]);
    }
    printf("\n");
}

void print_strs(const char *str[], size_t len) {
    printf("\n");
    for (int i = 0; i < len; ++i) {
        printf("%s\n", str[i]);
    }
    printf("\n");
}

int compare_ints(const void *left, const void *right) {
    int left_val = *(const int*) left;
    int right_val = *(const int*) right;
    return (left_val > right_val) - (right_val - left_val);

    // if (left_val < right_val) {
    //     return -1;
    // }
    // if (left_val > right_val) {
    //     return 1;
    // }
    // return 0;
}
int compare_strs(const void *left, const void *right) {
    char *const *left_str = left;
    char *const *right_str = right;
    return strcmp(*left_str, *right_str);
}