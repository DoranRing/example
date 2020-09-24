// 测试循环
long add(long n) {
    long result = 1;
    do {
        result += n;
        n--;
    } while (n > 10);
    return result;
}

// 测试循环
long addn(long n) {
    long result = 1;
    while (n > 10) {
        result += n;
        n--;
    }
    return result;
}
