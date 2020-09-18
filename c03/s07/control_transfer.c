long leaf(long y)
{
    return y + 2;
}

long top(long x)
{
    long r = leaf(x - 5);
    r *= 2;
    return r;
}

// 控制转换
int main() {
    return top(100);
}