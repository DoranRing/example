#include "stdio.h"

int add(int x, int y) {
    return x + y;
}

int minus(int x, int y) {
    return x - y;
}

int compute(int mode, int x, int y) {
    if (mode == 1) {
        return add(x, y);
    } else {
        return minus(x, y);
    }
}

// 过程调用
int main() {
    printf("compute: %d\n", compute(1, 10, 20));
}
