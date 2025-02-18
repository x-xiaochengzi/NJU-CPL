#include <stdio.h>
#include <limits.h>
int main(void) {
    printf("INT_MAX = %d\n", INT_MAX);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("UINT_MAX = %u\n", UINT_MAX);

    printf("LONG_MAX = %ld\n", LONG_MAX);
    printf("LONG_MIN = %ld\n", LONG_MIN);
    printf("ULONG_MAX = %lu\n", ULONG_MAX);

    printf("LONG_LONG_MAX = %lld\n", LONG_LONG_MAX);
    printf("LONG_LONG_MIN = %lld\n", LONG_LONG_MIN);
    printf("ULONG_LONG_MAX = %llu\n", ULONG_LONG_MAX);


    
    return 0;
}