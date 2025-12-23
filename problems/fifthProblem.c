// C Program to Find the Size of int, float, double and char
// seventh done
#include <stdio.h>

int main()

{

    int integerNumber;
    float floatNumber;
    double doubleNumber;
    char character;
    // size of int , float , double, char
    printf("size of integer : %zu\n", sizeof(integerNumber));
    printf("size of float : %zu\n", sizeof(floatNumber));
    printf("size of double : %zu\n", sizeof(doubleNumber));
    printf("size of character : %zu\n", sizeof(character));
}