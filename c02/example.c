//
// Created by doran on 2020/5/12.
//
#include "stdio.h"
#include "string.h"
#include "float.h"

typedef unsigned char * bytePointer;

/**
 * 打印每个字节的值
 *
 * @param pointer
 * @param len
 */
void showBytes(bytePointer pointer, size_t len) {
    size_t  i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", pointer[i]);
    }
    printf("\n");
}

/**
 * 测试位操作符
 */
void move() {
    int a = -2;
    int b = a << 2;
    printf("%d left move 2: %d\n", a, b);
    int c = b >> 2;
    printf("%d right move 2: %d\n", b, c);

    unsigned int ua = 2;
    int ub = ua << 2;
    printf("unsigned %d left move 2: %d\n", ua, ub);
}

/**
 * 长度扩展时的自动填充
 */
void extend() {
    char sx = -5;
    int x = sx;
    unsigned char usx = sx;
    unsigned int ux = usx;
    printf("sx = %d\n", sx);
    printf("usx = %u\n", usx);
    printf("x = %d\n", x);
    printf("ux = %u\n", ux);
}

/**
 * 长度缩小时的截取
 */
void split() {
    int x = 0b011010101;
    char cx = (char)x; // 0b11010101 -43
    printf("x = %d\n", x);
    printf("cx = %d\n", cx);
    unsigned int ux = 0b111010101;
    unsigned char ucx = (unsigned char) ux; // 0b11010101 213
    printf("ux = %d\n", ux);
    printf("ucx = %d\n", ucx);
}

/**
 * 浮点数的内存空间
 */
void floatNum() {
    float f1 = 1.0f;
    showBytes((bytePointer)&f1, sizeof(float));
    float f2 = 19012312313235.00f;
    printf("f2: %.2f\n", f2);
    showBytes((bytePointer)&f2, sizeof(float));
    float ff1 = 4.6f;
    float ff2 = 4.0f;
    float ff3 = ff1 - ff2;
    showBytes((bytePointer)&ff3, sizeof(float));
    printf("ff1 + ff2 = %.32f\n", ff1 - ff2); // 0.10000000149011611938476562500000

    float ff11 = 0.1f;
    printf("ff11 = %.32f\n", ff11);
}

int main() {
    int val = -2;
    showBytes((bytePointer) &val, sizeof(int));
    const char *s = "abcdef";
    showBytes((bytePointer) s, strlen(s));
    move();
    extend();
    split();
    floatNum();
}