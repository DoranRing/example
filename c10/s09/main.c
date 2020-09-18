#include <stdio.h>
#include "sys/socket.h"
#include "unistd.h"
#include "fcntl.h"

void dup_file_symbol_test();

int main() {
    dup_file_symbol_test();
   return 0;
}

// 自定义重定向
void dup_file_symbol_test(){
    int fd = open("out.txt", O_WRONLY, 0);
    dup2(fd, 1);
    printf("print out text.\n");
    close(fd);
}