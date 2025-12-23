// C Program to Compute Quotient and Remainder
// sixth done
#include <stdio.h>

int main()

{


    int firstNumber, secondNumber, quetient, remainder;
    printf("Enter two numbers : ");
    scanf("%d %d", &firstNumber, &secondNumber);
    quetient = firstNumber / secondNumber;
    remainder = firstNumber % secondNumber;

    printf("the quetient is : %d / %d = %d\n", firstNumber, secondNumber, quetient);
    printf("the remainder is : %d %% %d = %d\n", firstNumber , secondNumber, remainder);
    return 0;

}