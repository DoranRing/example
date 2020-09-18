#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void printHello() {
    printf("Hello, World!\n");
}


/**
 * 打印进程id
 */
void printPid() {
    printf("pid: %d\n", getpid());
}

void printPPid() {
    printf("ppid: %d\n", getppid());
}


/**
 * fork子进程
 */
void forkChild() {
    pid_t pid;
    int x = 1;
    pid = fork();
    if (pid == 0) {
        printf("child process: x = %d\n", ++x);
        _exit(0);
    }
    printf("parent process: x = %d\n", --x);
    _exit(0);
}

void dev() {
    int a = 10;
    int b = 0;
    int r = a / b;
    printf("10 / 0 = %d", r);
}

int main() {
//    dev();
    printHello();
    printPid();
    printPPid();
    forkChild();
    return 0;
}
