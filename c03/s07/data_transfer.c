void porc(
    long a1, long *a1p,
    long a2, long *a2p,
    long a3, long *a3p,
    long a4, long *a4p
) {
    *a1p += a1;
    *a2p += a2;
    *a3p += a3;
    *a4p += a4;
}

int main() {
    long a1 = 10;
    long a2 = 15;
    long a3 = 20;
    long a4 =25;
    porc(a1, &a1, a2 , &a2, a3, &a3, a4, &a4);
}