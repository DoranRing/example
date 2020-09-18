#include"stdio.h"

int sum(int a[2][3]) {
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}

int badSum(int a[2][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            sum += a[j][i];
        }
    }
    return sum;
}

int main() {
    int a[2][3] = {{1,2,3},{1,2,3}};
    int res = sum(a);
    printf("sum result: %d\n", res);
}