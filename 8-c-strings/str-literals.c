//
// Created by xzc on 2025/2/19.
//
#include <stdio.h>
int main(void) {
    //等价于 str[] = {'H', 'e', ... , '\0'}
    // 这是将文本段里面的字面量拷贝到栈区，可以修改
    char str[] = "Hello, world!";
    str[0] = 'N';
    printf("%s\n", str);

    // 对文本段里面的字面量进行修改，这是未定义行为
    char *str_ptr = "Goodbye, world!";
    str_ptr[0] = 'N';
    printf("%s\n", str_ptr);
}