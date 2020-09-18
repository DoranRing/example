struct rect {
    long x;
    int y;
    short z;
};

void testRect() {
    struct  rect r;
    r.x = 100;
    r.y = 50;
    r.z = 20;
    long* xAddr = &r.x;
}

