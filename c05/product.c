#include "stdio.h"
#include "string.h"

void handler(char c) {
    printf("%c\n", c);
}

void lowread(char *s) {
    for (int i = 0; i < strlen(s); i++) {
        handler(s[i]);
    }
}

void read(char *s) {
        for (int i = 0; i < strlen(s); i++) {
        printf("%c\n", s[i]);
    }
}

int main() {
    char *s = "hello";
    lowread(s);
    read(s);
}