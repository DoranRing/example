//
// Created by doran on 2020/5/15.
//

#include "stdio.h"
#include "string.h"

typedef unsigned char * bytePointer;

// 打印1字节整数
void showBytes(bytePointer pointer, size_t len) {
    size_t  i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", pointer[i]);
    }
    printf("\n");
}

void exercise256() {
    printf("exercise256 printf: \n");
    int a = 100;
    showBytes((bytePointer)&a, sizeof(int));
    int b = 100;
    showBytes((bytePointer)&b, sizeof(int));
}

void exercise257() {
    printf("exercise257 printf: \n");
    int a = 100;
    showBytes((bytePointer)&a, sizeof(int));
    short sa = 10;
    showBytes((bytePointer)&sa, sizeof(short));
    long al = __LONG_MAX__ - 1;
    showBytes((bytePointer)&al, sizeof(long)); // fe ff ff ff ff ff ff 7f
    double ad = 103.12341;
    showBytes((bytePointer)&ad, sizeof(double)); // f6 7f 0e f3 e5 c7 59 40
}

int isLittleEndian() {
    int a = 3;
    bytePointer p = (bytePointer)&a;
    if (p[0] == 3) {
        return 1;
    } else {
        return 0;
    }
}

void exercise258() {
    printf("exercise258 printf: \n");
    printf("%d\n", isLittleEndian());
}

void swapLowBit(int * x, int * y) {
    char * xc = (char *)x;
    char * xy = (char *)y;
    if (isLittleEndian()) {
        xy[0] = xc[0];
    } else {
        xy[3] = xc[3];
    }
}

int swapLowBit2(size_t x, size_t y) {
    size_t mask = 0xff;
    return (x & mask) | (y & ~mask);
}

void exercise259() {
    printf("exercise259 printf: \n");
    int a = 0x89ABCDEF;
    int b = 0x76543210;
    int c = swapLowBit2(a, b);
    printf("%x\n", c);
}

int replaceByte(unsigned x, int i, unsigned char b) {
    unsigned mask = ((unsigned)0xFF) << (i << 3);
    unsigned byte = ((unsigned) b) << (i << 3);
    return (x & ~mask) | byte;
}

void exercise260() {
    printf("exercise260 printf: \n");
    printf("%x\n", replaceByte(0x12345678, 2, 0xab));
    printf("%x\n", replaceByte(0x12345678, 0, 0xab));
}

int main() {
    exercise256();
    exercise257();
    exercise258();
    exercise259();
    exercise260();
}