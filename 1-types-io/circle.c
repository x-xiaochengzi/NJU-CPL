//
// Created by xzc on 2025/2/14.
//
/*
 * 计算给定半径（整数，假设为10）的圆的周长与面积。
 * 要求分别输出半径、周长与面积，每个结果占一行，其中周长与面积保留两位小数
 */
#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main(void) {
    int radius = 10;
    double perimeter = 2 * PI * radius;
    double area = PI * pow(radius, 2);
    // f: format
    // printf有两个参数，前者为格式字符串，后者为可变参数列表，用于指明要输出的数据
    // 格式字符串有两种directive，一类为普通字符，它会原样输出；另一类为conversion specification
    // 它以%开头，后面跟一个conversion specifier（如这里的d和f），%d就可以理解为一个占位符
    // .2表示保留两位有效数字，这个.是分割符，它的前面还可以有其他东西
    printf ("radius = %d\nperimeter = %.2f\narea = %.2f",radius, perimeter, area);
    return 0;
 }