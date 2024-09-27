/* Problem Statement:
Write a program using a ternary operator to find the maximum of two numbers.
*/

#include<stdio.h>
int main(){
int a,b;
printf("Enter the First number: ");
scanf("%d",&a);
printf("Enter the Second number: ");
scanf("%d",&b);
(a==b)?printf("You gave the same number to both variabes"):((a>b)?printf("%d is greater than %d",a,b):printf("%d is greater than %d",b,a));
return 0;
}