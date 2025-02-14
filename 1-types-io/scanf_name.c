//
// Created by xzc on 2025/2/14.
//

#include<stdio.h>
int main(void) {
    char first_name[20];
    char last_name[20];

    // scanf的format有三种字符：普通字符，转换规格，空格
    // 常见的转换规格中，除了%c不会忽略前导空白字符，其它都会
    // 空格的作用是吸收输入的空白字符
    // 普通字符的作用就是匹配它自身，当format中出现普通字符，就是要求必须按照此格式输入
    scanf("%s%s", first_name, last_name);
    printf("%s %s",last_name, first_name);
    return 0;
 }