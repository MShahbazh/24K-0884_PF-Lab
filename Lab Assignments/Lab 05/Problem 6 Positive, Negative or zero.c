/* Problem Statement:
Use the ternary operator to check if a number is positive, negative, or zero. */

#include<stdio.h>
int main(){
int a;
printf("Enter the number: ");
scanf("%d",&a);
(a==0)?printf("The number is 0"):((a>0)?printf("%d is a positive number",a):printf("%d is a negative number",a));
return 0;
}