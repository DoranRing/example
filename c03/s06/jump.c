#include "stdio.h"

// 测试跳转指令
int gotoTest(int b) {
    int i = 5;
    if (b == 0) {
        i--;
        return i;
    } else {
        goto addLabel;
    }

    addLabel: {
        i++;
        return i;
    }
}

int main() {
    printf("i = %d\n", gotoTest(0));
}