#include <stdio.h>
#include "fcntl.h"
#include "unistd.h"

// 测试进程打开的描述符情况
// ll /proc/{pid}/fd
void open_fd_test() {
    open("foo.txt", O_RDONLY, 0);
    sleep(1000);
}

int main(int argc, char *argv[]) {
    open_fd_test();
}