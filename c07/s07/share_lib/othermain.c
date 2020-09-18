#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

extern void addvec();
extern int addcnt;

int main() {
    addvec();
    printf("addcnt: %d", addcnt);
    sleep(5);
}