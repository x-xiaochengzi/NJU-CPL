//
// Created by xzc on 2025/2/15.
//

#include<stdio.h>
#define NUM 10
int dict[NUM] = {1, 1, 2, 3, 5, 8, 13, 21, 44, 65};
int main(void) {
    int left = 0, right = NUM - 1;
    int key = 0;
    printf("Please enter the key which you want to search: ");
    scanf("%d", &key);
    int index = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (dict[mid] > key) {
            right = mid - 1;
        } else if (dict[mid] < key) {
            left = mid + 1;
        } else {
            index = mid;
            // break;
            // 如果有多个key，找最左边的key的下标:
            // 此时index的左边可能还有key, 并且左边是有序的，所以在左边继续二分查找
            right = mid - 1;
        }
    }
    if (index == -1) {
        printf("Not found!\n");
    } else {
        printf("The index of %d is %d\n", key, index);
    }
    return 0;
}