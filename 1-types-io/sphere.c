//
// Created by xzc on 2025/2/14.
//

/*
* 计算给定半径（整数，假设值为 100）的球体的表面积与体积。
* 要求每个输出结果占一行，且每个输出结果至少占 15 个字符，左对齐。
 */

#include <stdio.h>
#include <math.h>
int main(void) {
    const double PI = 3.1415926;
    int radius = 100;

    double surface_area = 4 * PI * pow(radius, 2);
    double volume = 4.0 / 3 * PI * pow(radius, 3);

    // .4: precision
    // 15: minimum width，表示至少占多少位，不足默认补空格
    // -: flag，表示左对齐，默认右对齐，flag为+
    printf("%-15.4f:surface_area\n%-15.4f:volume\n",
        surface_area, volume);
    return 0;
}