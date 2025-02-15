//
// Created by xzc on 2025/2/16.
//
#include<stdio.h>
int main(void) {
    int size = 0;
    printf("Please enter the size of the array to be sorted: ");
    scanf("%d", &size);
    int array[size];
    int len = -1;
    // scanf的返回值
    // (1) input failure（无东西可读）: EOF
    // (2) match failure: %d, 1234i -> 4
    while ((scanf("%d", &array[++len])) != EOF);
    // print
    printf("before: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
    // seletion sort
    for (int i = 0; i < size - 1; ++i) {
        // find the min
        int min = array[i];
        int min_index = i;
        for (int j = i + 1; j < size; ++j) {
            if (array[j] < min) {
                min = array[j];
                min_index = j;
            }
        }

        //swap
        int temp = array[i];
        array[i] = min;
        array[min_index] = temp;
    }
    // print
    printf("after: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}