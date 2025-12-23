#include <stdio.h>
int main()
{

    int x = 10;
    int y = 011;
    int z = 0x33;
    float a = 2.2;
    float b = .2E-5;
    printf("size of x : %zu\n", sizeof(x));
    printf("size of y : %zu\n", sizeof(y));
    printf("size of z : %zu\n", sizeof(z));
    printf("size of a : %zu\n", sizeof(a));
    printf("size of b : %zu\n", sizeof(b));
}