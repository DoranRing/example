#include "stdio.h"

int main() {
    long y = 10;
    long *yp = &y;
    printf("address: %p\n", yp);
}