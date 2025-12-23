//working of arithmetic operator
#include <stdio.h>

int main()
{
    int a = 9, b = 4, c;
    c = a + b;
    printf("addition : %d + %d = %d\n", a, b, c);
    c = a - b;
    printf("subtraction : %d - %d = %d\n", a , b , c);
    c = a * b;
    printf("Multiplication : %d * %d = %d\n", a , b , c);
    c = a / b;
    printf("Division : %d / %d = %d\n", a , b , c);
    c = a % b;
    printf("Modulas : %d %% %d = %d\n", a , b , c);
}