#include <stdio.h>

int main()
{
    int var1 = 5, var2 = 5;

    //5 is displayed
    // then var1 is increased to 6.
    printf("var1 = %d\n", var1++);
    printf("var1 = %d\n", var1);
    printf("var1 = %d\n", ++var1);
    printf("var1 = %d\n", var1--);
    printf("var1 = %d\n", var1);
    printf("var1 = %d\n", --var1);
    //var2 is increased to 6.
    // then var2 is displayed.
    printf("var2 = %d\n", ++var2);
    //var2 is decresed to 5
    // then var2 is displayed.
    printf("var2 = %d\n", --var2);
    //var2 is displayed.
    //then var2 is decreased to 4.
    printf("var2 = %d\n", var2--);
    printf("var2 = %d\n", var2);
}