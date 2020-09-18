#include <stdio.h>
#include "stdlib.h"

void malloc_test();

void point_test();

int main() {
    malloc_test();
    point_test();
    return 0;
}

void malloc_test() {
    printf("malloc mem: 4k\n");
    char *mem1 = (char *) malloc(4 * 1000);
    printf("mem addr: %p\n", mem1);
    printf("free mem\n");
    free(mem1);
}

void point_test() {
    long val = 10;
    long addr = (long) &val;
    printf("val: %ld", *(long *) addr);
}