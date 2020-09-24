#include "stdio.h"

void fixedArray() {
    int iarr[4];
    iarr[0] = 0;
    iarr[1] = 10;
    iarr[2] = 20;
    iarr[3] = 30;
    printf("arr address: %p", iarr);
}

void loopArray() {
    int iarr[4];
    for (int i = 0; i < 4; i++) {
        iarr[i] = 10;
    }
    printf("arr address: %p", iarr);
}

int main() {
    fixedArray();
    loopArray();
}
