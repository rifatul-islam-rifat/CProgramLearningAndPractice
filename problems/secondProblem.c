//C Program to Add Two Integer
//C Program to Multiply Two Floating-Point Numbers
// second and third problem done
#include <stdio.h>

int main()
{

    // int num1, num2;
    // int sum;
    // printf("Enter two integer values num1 and num2 : ");
    // scanf("%d %d", &num1, &num2);

    // sum = num1 + num2;

    // printf("the sum is : %d + %d = %d\n", num1, num2, sum);
    float num1, num2;
    double multiplication;
    printf("Enter two float number num1 and num2 : ");
    scanf("%f %f", &num1, &num2);

    multiplication = num1 * num2;

    printf("mulplication result is : %f * %f = %lf", num1 , num2, multiplication);
    return 0;
}
