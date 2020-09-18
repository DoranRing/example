#include "stdio.h"

void ten(long arr[2]) {
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 10;
    arr[4] = 10;
    arr[5] = 10;
    arr[6] = 10;
}

long outboundTest() {
    long arr1[2];
    long arr2[2];
    ten(arr1);
    return arr2[0];
}

int main() {
    long val = outboundTest();
    printf("val: %ld\n", val);
}
