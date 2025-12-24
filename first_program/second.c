#include <stdio.h>

int main()
{

    int a;
    char b;
    float c;
    double d;

    int num1, num2;
    printf("Enter numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("%d / %d = %d\n", num1 , num2, (num1 / num2));
    printf("%d %% %d = %d\n", num1 , num2, (num1 % num2));
    printf("size of integer : %zu\n", sizeof(a));
    printf("size of char : %zu\n", sizeof(b));
    printf("size of float : %zu\n", sizeof(c));
    printf("size of double : %zu\n", sizeof(d));

    return 0;

}