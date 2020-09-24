// 通过汇编反推出c代码

void decode1(long *xp, long *yp, long *zp) {
    long xpV = *xp;
    long ypV = *yp;
    long zpV = *zp;
    *yp = xpV;
    *zp = ypV;
    *xp = zpV;
}