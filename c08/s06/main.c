#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;

void bar() {
    longjmp(buf, 2);
}
void foo() {
    bar();
}
int main() {
    switch (setjmp(buf)) {
        case 0:
            foo();
            break;
        case 2:
            printf("condition 2\n");
            break;
        default:
            printf("default condition\n");
    }
    return 0;
}
