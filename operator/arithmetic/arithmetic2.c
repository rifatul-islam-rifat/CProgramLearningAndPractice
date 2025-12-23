#include <stdio.h>

int main()

{
    

    float a = 5.0;
    float b = 2.0;
    int c  = 5;
    int d = 2;
    double doubled = d;
    // Either one of the operators are floating point number
    printf("%f / %f = %lf\n", a , b , (a / b));
    printf("%f / %f = %lf\n", a , doubled , (a / doubled));
    // Both operands are integers
    printf("%d / %d = %d\n", c , d , (c / d));
}