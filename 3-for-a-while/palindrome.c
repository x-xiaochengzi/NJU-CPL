//
// Created by xzc on 2025/2/16.
//
#include<stdio.h>
#include<stdbool.h>
#include <string.h>
#define LEN 21
char string[LEN] = "";
int main(void) {
    printf("Please enter a string containing most 20 characters: ");
    scanf("%s", string);
    bool is_palindrome = true;
    int len = strlen(string);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (string[i] != string[j]) {
            is_palindrome = false;
            break;
        }
    }
    if (is_palindrome) {
        printf("%s is a palindrome.\n", string);
    } else {
        printf("%s is not a palindrome.\n", string);
    }
    return 0;
}



