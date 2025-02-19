//
// Created by xzc on 2025/2/19.
//

#include<stdio.h>
int strlen1(const char *str);
int strlen2(const char *str);
int strlen3(const char *str);
size_t strlen_std(const char *str);
// if the length of str is greater than max, return max, otherwise the length of str.
size_t str_n_len(const char *str, size_t max);
int main(void) {


    return 0;
}
int strlen1(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int strlen2(const char *str) {
    int len = 0;
    while (str[len++] != '\0') ;
    return len - 1;
}

int strlen3(const char *str) {
    int len = -1;
    while (str[++len] != '\0') ;
    return len;
}

size_t strlen_std(const char *str) {
    const char *sc;
    for (sc = str; *sc != '\0'; ++sc);
    return sc - str;
}

size_t str_n_len(const char *str, size_t max) {
    size_t count = 0;

    // while (*str != '\0' && max != 0) {
    while (*str && max) {
        count++;
        str++;
        max--;
    }
    return count;
}