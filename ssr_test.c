void foo() {
    int a, b, x, s;
    a = 1;
    b = 2;
    x = a + b;
    printf("x = %d\n", x);
    a = b;
    printf("a = %d\n", a);
    b = x;
    a = x - a;
    int c=10;
    int* d=&c;
    *d = 1;
    int e=c;
    printf("e = %d\n", e);
}
