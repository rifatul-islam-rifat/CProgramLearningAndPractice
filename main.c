#include <stdio.h>

int main()

{
    int number;
    printf("Print Exam number : ");
    scanf("%d", &number);

    if(number >= 33 && number < 40){
        printf("%d number and grade D", number);
    } 
    else if(number >=41 && number < 50){
        printf("%d number and grade C", number);
    } 
    else if(number >=51 && number < 60){
        printf("%d number and grade B", number);
    } 
    else if(number >= 61 && number < 70){
        printf("%d number and grade A-", number);
    } 
    else if(number >=71 && number < 80){
        printf("%d number and grade A", number);
    }
    else if(number >=80 && number <=100){
        printf("%d number and grade A+", number);
    }
    else {
        printf("%d number and grade F", number);
    }
}