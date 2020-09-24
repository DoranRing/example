#include "stdio.h"

void multstore(long x, long y, long *dest);

long mult2(long x, long y) {
    return x + y;
}

int main() {
    long dest = 0;
    long x = 10;
    long y = 20;
    multstore(x, y, &dest);
    printf("dest: %ld\n", dest);
    return 0;
}