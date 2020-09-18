void add(int *x, int *y) {
    *y = *y + *x;
}

// 局部变量存储再栈上
int main() {
    int x = 10;
    int y = 15;
    add(&x, &y);
}