#include<stdio.h>
int main(){
    double first_number;
    double second_number;
    char oparetor;
    printf("LETS START CALCULATING :)\n");
    printf("enter the operation (+,-,*,/) :");
    scanf("%c",&oparetor);
    printf("enter the first number :");
    scanf("%lf",&first_number);
    printf("enter the second number :");
    scanf ("%lf",&second_number);
    switch(oparetor)
    {
        case '+' :
        printf("%lf + %lf = %lf",first_number,second_number,(first_number+first_number));
        break;
        case '-' :
        printf("%lf - %lf = %lf",first_number,second_number,(first_number-first_number));
        break;
        case '*' :
        printf("%lf * %lf = %lf",first_number,second_number,(first_number*first_number));
        break;
        case '/' :
        if(second_number!=0)
        printf("%lf / %lf = %lf",first_number,second_number,(first_number/first_number));
        else
        printf("divided by zero situation ");
        break;
        default:
        printf("invalid operator");
        break;
    }
    return 0;

}