#include <stdio.h>
#include "unistd.h"
#include <signal.h>
#include "fcntl.h"

void child_process();
void sign_process();
void create_zombie_process(int);

int main() {
//    process();
//    sign_process();
    create_zombie_process(10);
    return 0;
}

// 创建子进程
void child_process() {
    printf("start\n");
    int cid = fork();
    if (cid == 0) {
        printf("children process start\n");
        _exit(0);
    }
    printf("main process end\n");
}


int fd;
void sign_handler(int signal) {
    close(fd);
    printf("sig handler: close fd\n");
}
// 进程发送信号
void sign_process() {
    int pid = getpid();
    fd = open("file.txt", O_WRONLY | O_APPEND, 0);
    signal(SIGURG, sign_handler);

    int cid = fork();
    if (cid == 0) {
        char *word = "abcd";
        write(fd, word, 4);
        kill(pid, SIGURG);
        _exit(0);
    }
    sleep(10000);
}

// 创建僵尸进程
void create_zombie_process(int n) {
    for (int i = 0; i < n; ++i) {
        int cid = fork();
        if (cid == 0) {
            sleep(100);
        };
    }
}
