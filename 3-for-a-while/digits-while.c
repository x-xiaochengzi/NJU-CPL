//
// Created by xzc on 2025/2/15.
//

#include<stdio.h>
int main(void) {
    int number = 0;
    printf("Please enter the number to be count out how many digits it has: ");
    scanf("%d",&number);
    int count = 0, temp = number;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    printf("%d has %d digits\n", number, count);

    return 0;
}