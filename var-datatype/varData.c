#include <stdio.h>

int main()
{


    // // create or declare variable

    // int firstVar;
    // // initialize variable 
    // firstVar = 2;
    // // print variable 
    // // %d => int format speficier using for printing integer value in console
    // printf("%d", firstVar);

    // declare int float double char variable and print value and their size
    int x = 10;
    float y = 10.22;
    double z = 22.33;
    char ch = 'A';
    // \n => new line escape sequence
    printf("integer value = %d float = %.2f double = %lf char = %c\n", x, y, z, ch);
    printf("integer value = %zu float = %zu double = %zu char = %zu\n", sizeof(x), sizeof(y), sizeof(z), sizeof(ch));
}