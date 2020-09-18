#include "stdio.h"
#include "unistd.h"

void exec_hello() {
    execve("hello", NULL, NULL);
}

int main() {
    printf("should compiler hello.c\n");
    exec_hello();
    return 0;
}