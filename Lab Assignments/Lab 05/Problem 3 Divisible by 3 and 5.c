/* Problem Statement:
Write a program that checks if a number is divisible by both 3 and 5 using logical operators. */

#include <stdio.h>
int main(){
int a;
printf("Enter the number: ");
scanf("%d",&a);
if (a%3==0&&a%5==0)
printf("%d is divisible by 3 and 5",a);
else 
printf("%d isn't divisible by 3 and 5",a);
return 0;
}