// 数据转移指令示例
long exchange(long *xp, long y) {
    long x = *xp;
    *xp = y;
    return x;
}