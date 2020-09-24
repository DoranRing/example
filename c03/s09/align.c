struct base {
    int a;
    char b;
    int c;
};

void test_base() {
    struct base b;
    b.a = 100; // 4byte
    b.b = 'a'; // 1 + 3 byte
    b.c = 50; // 4byte
}

struct align {
    int a;
    int b;
    char c;
};

void test_align() {
    struct align a[3];
    a[0].a = 10;
    a[1].a = 11;
    a[2].a = 12;   
}

int main() {
    test_base();
    test_align();
}
