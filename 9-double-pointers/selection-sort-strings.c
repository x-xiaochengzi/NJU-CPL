//
// Created by xzc on 2025/2/22.
//

#include <stdio.h>
#include <string.h>
#define LEN 10

void print(const char **arr, int len);
void selection_sort(const char **arr, int len);

int main(void) {
    // []的优先级高于*, 所以先解释[], 再解释*
    // 1. musicians是一个长度为10的数组
    // 2. 数组的每个元素是一个指针，指针所指的内存单元被解释为char
    char *musicians[LEN] = {
        "Luo Dayou",
        "Cui Jian",
        "Dou Wei",
        "Zhang Chu",
        "Wan Qing",
        "Li Zhi",
        "Yao",
        "ZuoXiao",
        "ErShou Rose",
        "Hu Mage"
    };
    print(musicians, LEN);
    selection_sort(musicians, LEN);
    print(musicians, LEN);
    return 0;
}

int get_min_index(const char *arr[], int begin, int end) {
    const char *min = arr[begin];
    int min_index = begin;
    for (int i = begin + 1; i < end; ++i) {
        if (strcmp(arr[i], min) < 0) {
            min = arr[i];
            min_index = i;
        }
    }
    return min_index;
}

// 要交换两个内存单元里面的内容，就要知道它们的地址
// 两个内存单元中的内容被解释成char*，所以要用char **指针来接受它们的地址
void swap(char **left, char **right) {
    char* temp = *left;
    *left = *right;
    *right = temp;
}

void print(const char **arr, int len) {
    printf("\n");
    for (int i = 0; i < len; ++i) {
        printf("%s; ", arr[i]);
    }
    printf("\n");
}

// arr是一个数组，数组的每个元素是指针
// 指针所指内存中的内容被解释成char类型
// 并且不能通过arr[i]对内存中的内容进行修改
void selection_sort(const char *arr[], int len) {
     for (int i = 0; i < len; ++i) {
         int min_index = get_min_index(arr, i, len);
         swap(&arr[i], &arr[min_index]);
     }
}
