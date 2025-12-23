// C Program to Swap Two Numbers
// eigth done.
#include <stdio.h>

int main()

{
    // with variable (temp variable)
    // int firstNumber , secondNumber, temp;

    // printf("Enter first and second number : ");
    // scanf("%d %d", &firstNumber, &secondNumber);

    // printf("before swapping : firstNumber = %d, secondNumber = %d\n", firstNumber, secondNumber);
    // temp = firstNumber;
    // firstNumber = secondNumber;
    // secondNumber = temp;
    // printf("After swapping : firstNumber = %d, secondNumber = %d\n", firstNumber, secondNumber);
    // without variable (without temp)
    int firstNum, secondNum;
    printf("Enter first and second Num : ");
    scanf("%d %d", &firstNum, &secondNum);

    printf("Before swapping : first : %d, second : %d\n", firstNum, secondNum);
    
    //printf("after :first : %d, second: %d\n", firstNum, secondNum);
    firstNum = firstNum - secondNum; // 133
    secondNum = firstNum + secondNum; //100 
    firstNum = secondNum - firstNum; // -33

    printf("After swapping firstNum : %d, secondNum: %d\n", firstNum, secondNum);


    return 0;


}