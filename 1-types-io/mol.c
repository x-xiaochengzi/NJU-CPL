//
// Created by xzc on 2025/2/14.
//

/*
 * 计算6g氧气的分子数
 */

#include <stdio.h>
#include <math.h>
int main(void) {
    const double MOL = 6.02E23;
    const int GRAM_PER_MOL = 32;

    int mass = 6;

    double quantity = mass * 1.0 / GRAM_PER_MOL * MOL;

    // %e: exponent
    // %g: significant（比较复杂）
    printf("quantity = %.3e\nquantity = %.5g\n",quantity,quantity);

    return 0;
}