#include "stdio.h"
#include "stdlib.h"

void sum1(long source[], long length, long *dest) {
    for (long i = 0; i < length; i++) {
        *dest = *dest + source[i];
    }
}

void sum2(long source[], long length, long *dest) {
    long sum = *dest;
    for (long i = 0; i < length; i++) {
        sum += source[i];
    }
    *dest = sum;
}

long* genArr(int n) {
    long *arr = (long *)malloc(n * sizeof(long));
    for (int i = 0; i < n; i++) {
        *(arr + i) = i;
    }
    return arr;
}

int main() {
    long* source = genArr(4);
    long dest1 = 0;
    long dest2 = 0;
    sum1(source, 5, &dest1);
    sum2(source, 5, &dest2);
    printf("dest1: %ld\n", dest1);
    printf("dest2: %ld\n", dest2);
}