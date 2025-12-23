#include <stdio.h>

int main()
{

    // add two int number without creating variable and then with create variable
    // printf("%d + %d = %d", 10, 20, 10 + 20);
    // add three float number without creating variable and then with create variable
    // add four double number without creating variable and then with create variable
    // convert char to ascci /ascci to char without creating variable and then with create variable
    int firstVar, secondVar, sum, sub;
    float f1, f2, f3, fsum , fsub;
    f1 = 30; f2 = 40; f3 = 50;
    double d1, d2, d3, d4, dsum, dsub;
    d1 = 100, d2 = 22, d3 = 33, d4 = 55;
    char character = 'A';
    int ascii = 70;
    dsum = d1 + d2 + d3 + d4;
    dsub = d1 - d2 - d3 - d4;
    fsum = f1 + f2 + f3;
    fsub = f1 - f2 - f3;
    firstVar = 10;
    secondVar = 20;
    sum = firstVar + secondVar;
    sub = firstVar - secondVar;
    printf("%d + %d = %d\n", firstVar , secondVar, sum);
    printf("%d - %d = %d\n", firstVar , secondVar, sub);
    printf("%f + %f + %f = %f\n", f1, f2, f3, fsum);
    printf("%f - %f - %f = %f\n", f1, f2, f3, fsub);
    printf("%lf + %lf + %lf + %lf = %lf\n", d1, d2, d3, d4, dsum);
    printf("%lf - %lf - %lf - %lf = %lf\n", d1, d2, d3, d4, dsub);
    printf("convert %c to ascii = %d\n", character, character);
    printf("ascci  %d to character = %c\n", ascii, ascii);

}