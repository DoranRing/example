// 循环展开
int sum1(int data[4]) {
    int sum = 0;
    for(int i = 0; i < 4; i++) {
        sum += data[i];
    }
    return sum;
}

int sum2(int data[4]) {
    int sum = 0;
    int i = 0;
    for (; i < 4; i += 2) {
        sum = sum + data[i] + data[i + 1];
    }
    for(; i < 4; i++) {
        sum += data[i];
    }
    return sum;
}

int sum3(int data[4]) {
    int sum1 = 0;
    int sum2 = 0;
    int i = 0;
    for (; i < 4; i += 2) {
        sum1 += data[i];
        sum2 += data[i + 1];
    }
    for(; i < 4; i++) {
        sum1 += data[i];
    }
    return sum1 + sum2;
}

int main() {
    int data[4] = {1,2,3,4};
    sum1(data);
}