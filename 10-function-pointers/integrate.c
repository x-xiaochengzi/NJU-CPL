//
// Created by xzc on 2025/2/22.
//
#include <stdio.h>
#include <math.h>
#define NUM_OF_PARTITIONS 1000000
double integrate(double low, double high, double (*func)(double));
double square(double x);
int main(void) {
    double low = 0.0;
    double high = 1.0;
    double (*funcs[])(double) = {sin, cos, square};
    for (int i = 0; i < 3; ++i) {
        printf("integration = %f\n", integrate(low, high, funcs[i]));
    }

    return 0;
}

double square(double x) {
    return pow(x, 2);
}
double integrate(double low, double high,
                 double (*func)(double)) {
    double interval = (high - low) / NUM_OF_PARTITIONS;
    double sum = 0;
    for (int i = 0; i < NUM_OF_PARTITIONS; ++i) {
        double xi = low + interval * i;
        double yi = func(xi);
        sum += yi * interval;
    }
    return sum;
}