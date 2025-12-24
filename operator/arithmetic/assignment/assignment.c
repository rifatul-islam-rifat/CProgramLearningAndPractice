#include <stdio.h>

int main()

{

    int a = 20, c = 10;
    printf("a : %d\n", a);
    c += a;
    printf("c : %d\n", c);
    c -= a;
    printf("c : %d\n", c);
    c *=  a;
    printf("c : %d\n", c);
    c /= a;
    printf("c : %d\n", c);
    c %= a;
    printf("c : %d\n", c);

}