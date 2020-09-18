long* testNonFixedArray(int n) {
    long array[n];
    array[n - 1] = 10;
}

int main() {
    testNonFixedArray(4);
}