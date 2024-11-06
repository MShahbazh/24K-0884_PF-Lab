/*Problem Statement: Write a C program with a user-defined function calculate to perform basic arithmetic operations
such as addition, subtraction, multiplication, and division. The program should take two
numbers and an operation choice as input, and then use the function to perform the operation.*/

#include<stdio.h>
void Cal(float x, float y, char op){
    switch(op){
        case '+':
        printf("Result = %.2f",x+y);
        break;
        case '-':
        printf("Result = %.2f",x-y);
        break;
        case '*':
        printf("Result = %.2f",x*y);
        break;
        case '/':
        if(y==0){
            printf("You can't enter zero in denominator");
        }
        else
        {
            printf("Result = %.2f",x/y);
        }
        break;
        default:
        printf("Enter a valid operator");
    }
}
int main(){
    float i,j;
    char c;
    printf("Enter first number (This will be treated as Numerator): ");
    scanf("%f",&i);
    printf("Enter second number (This will be treated as Denominator) : ");
    scanf("%f",&j);
    printf("Enter the Operator (+,-,*,/): ");
    scanf(" %c",&c);
    Cal(i,j,c);
    return 0;
}
