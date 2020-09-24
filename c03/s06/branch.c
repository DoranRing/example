// 条件控制实现分支功能
int absdiff(int x, int y)
{
    if (x > y)
    {
        return x - y;
    }
    else if (x == y)
    {
        return 0;
    }
    else
    {
        return y - x;
    }
}

// 条件传送实现条件分支
int absdiff2(int x, int y) {
    int rval = y - x;
    int eval = x - y;
    int test = x >= y;
    if (test) rval = eval;
    return rval;
}