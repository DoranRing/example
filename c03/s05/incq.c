#include "stdio.h"

int main() {
    int v = 0;
    int *vp = &v;
    (*vp)++;
    
    printf("i=%d\n", *vp);
    return 0;
}