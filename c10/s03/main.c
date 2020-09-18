#include <stdio.h>
#include "fcntl.h"
#include "unistd.h"

void file_symbol_test();

int main() {
    file_symbol_test();

    return 0;
}

// 测试进程的描述表
void file_symbol_test() {
    int fd1, fd2;

    fd1 = open("foo.txt", O_RDONLY, 0);
    printf("fd2 = %d\n", fd1);
    close(fd1);
    fd2 = open("baz.txt", O_RDONLY, 0);
    printf("fd2 = %d\n", fd2);
}


