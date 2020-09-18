#include <unistd.h> 
#include "stdio.h"

int main() {
    printf("hello, world\n");
    write(1, "hello, world\n", 13);
    _exit(0);
}