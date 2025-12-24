#include <stdio.h>

int main()

{

    int a = 5, b = 5, c = 10, result;
    result = (a == b) && (b < c);
    printf("(%d == %d) && (%d < %d): %d\n", a , b , b, c, result);
    result = (a == b) && (b > c);
    printf("(%d == %d) && (%d > %d) : %d\n", a , b , b, c, result);
    result = (a == b) || (b > c);
    printf("(%d == %d) || (%d > %d) : %d\n", a , b , b, c, result);
    result = (a == b) || (b < c);
    printf("(%d == %d) || (%d < %d) : %d\n", a , b , b, c, result);
    result = (a != b) || (b < c);
    printf("(%d != %d) || (%d < %d) : %d\n", a , b , b, c, result);
    result = !(a != b);
    printf("!(%d != %d) : %d\n", a , b, result);
    result = !(a == b);
    printf("!(%d == %d): %d\n", a , b , result);



    return 0;


}