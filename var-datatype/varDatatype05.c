#include <stdio.h>

int main()

{


    long long a;
    unsigned long long b;
    short c;
    c = 11;
    b = 3432045343;
    a = 343444555;
    printf("a value : %lld\n", a);
    printf("b value : %llu\n", b);
    printf("size of b value : %zu\n", sizeof(b));
    printf("size of a : %zu\n", sizeof(a));
    printf("sizeof c: %zu\n", sizeof(c));
    printf("sizeof c: %hd", c);
}