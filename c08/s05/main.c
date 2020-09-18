#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sigint_handler(int sig) {
    printf("caught sigint!\n");
    _exit(0);
}

void register_sign_handler() {
    signal(SIGINT, sigint_handler);
}

int main() {
    register_sign_handler();
    pause();
    return 0;
}
