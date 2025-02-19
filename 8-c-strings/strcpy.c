//
// Created by xzc on 2025/2/19.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strcpy1(char *dest, const char *src);
void strcpy2(char *dest, const char *src);
void strcpy3(char *dest, const char *src);
void strcpy4(char *dest, const char *src);
void strcpy5(char *dest, const char *src);
void strcpy6(char *dest, const char *src);
char *strcpy_std(char *dest, const char *src);

int main(void) {
    const char *src = "Hello, world!";
    char *dest = malloc(strlen(src) + 1);

    strcpy5(dest, src);
    printf("dest = %s\n", dest);

    return 0;
}

void strcpy1(char *dest, const char *src) {
    int i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void strcpy2(char *dest, const char *src) {
    int i = 0;
    // 根据赋值表达式的结果，将1中的赋值语句拿到循环中
    while ((dest[i] = src[i]) != '0') {
        i++;
    }
}

void strcpy3(char *dest, const char *src) {
    int i = 0;
    // 根据dest[i] = *(arr + i), 对2进行修改
    while ((*(dest + i) = *(src + i)) != '\0') {
        i++;
    }
}

void strcpy4(char *dest, const char *src) {
    // 指针本身就可以++, 所以可以不需要3中的变量i
    while ((*dest = *src) != '\0') {
        src++;
        dest++;
    }
}

void strcpy5(char *dest, const char *src) {
    // 可以将4中的++拿到循环条件里面去
    // 但要注意运算符优先级: 后缀++ > *
    while ((*dest++ = *src++) != '\0') ;

}

void strcpy6(char *dest, const char *src) {
    while ((*dest++ = *src++)) ;
}

char *strcpy_std(char *dest, const char *src) {
    for (char *s = dest; (*s++ = *src++) != '\0'; );
    return dest;
}