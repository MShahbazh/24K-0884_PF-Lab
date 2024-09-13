/* 
Question 2
Create a calculator asking for operator (+ or – or * or /) and operands and
performs calculation according to the user input using switch statement.
*/


#include<stdio.h>
int main(){
float x,y; 
char op;
printf("Enter the First number (Numerator in division):");
scanf("%f",&x);
printf("Enter the Second number (Denominator in division):");
scanf("%f",&y);
printf("Enter the Operator (+,-,/,*):");
scanf(" %c",&op);
switch(op){
case '+':
    printf("The sum of numbers is %.0f",x+y);
break;

case '-':
    printf("The difference of numbers is %.0f",x-y);
break;

case '*':
    printf("The product of the numbers is %.0f",x*y);
break;

case '/':
    if(y==0)
        printf("Denominator can't be zero");
    else 
        printf("The division of number is: %.0f",x/y);
break;
default:
    printf("Enter a valid operator");
}
return 0;
}