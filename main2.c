// even or odd dont using %

#include <stdio.h>

int main()
{

    int number;
    printf("Enter number : ");
    scanf("%d", &number);
    if((number / 2) * 2 == number){
        printf("%d is even", number);
    } else{
        printf("%d is odd", number);
    }

    
}