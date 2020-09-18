union any {
    char a;
    int b;
    long c;
};

long any_test(){
    union any a;
    a.a = 10;
    a.b = 15;
    a.c = 20;
    return a.c;
}

int main() {
    any_test();
}