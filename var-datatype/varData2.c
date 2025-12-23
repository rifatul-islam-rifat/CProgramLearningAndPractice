#include <stdio.h>
#include <stdbool.h>
int main()
{
    // integer literals =>24, 
    // integer literals 3 types => decimal, octal , hexadecimal
    // float literals => 33.33,
    // character literals => '3',
    // string literals => "hello world"
    // integer, character, float , double
    int intValue = 11;
    float floatValue = 22.22;
    double doubleValue = 33.31;
    char characterValue = 'A';
    char name[] = "md._Rifatul_islam";
    bool asVoter = false;
    printf("integer value is : %d\n", intValue);
    printf("floating point value is : %.2f\n", floatValue);
    printf("double value is : %.2lf\n", doubleValue);
    printf("characterValue is : %c\n", characterValue);
    printf("My name is : %s\n", name);
    if(asVoter){
        printf("yes. Voter\n");

    } else{
        printf("no. not Voter\n");
    }
    printf("size of integer: %zu\n",  sizeof(intValue));
    printf("size of float : %zu\n",   sizeof(floatValue));
    printf("size of double : %zu\n",  sizeof(doubleValue));
    printf("size of character: %zu\n",sizeof(characterValue));
    printf("size of boolean : %zu\n", sizeof(asVoter));
    printf("size of string : %zu\n", sizeof(name));
    return 0;

}