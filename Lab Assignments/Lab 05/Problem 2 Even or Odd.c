/* Problem Statement:
Create a program that determines if a number is positive, negative, or zero, and if it’s positive, checks if it’s an even or odd number, using nested if-else */

#include<stdio.h>
int main(){
int n;
printf("Enter the number: ");
scanf("%d",&n);
if(n>0)
{
	if (n%2==0)
		printf("%d is a positive even number",n);
	else 
		printf("%d is a positive odd number",n);
}
else if (n<0)
{
	if (n%2==0)
		printf("%d is a negative even number",n);
	else 
		printf("%d is a negative odd number",n);
}
else 
printf("0 is an even number. It doesn't contain any sign, it is considered neutral");
return 0;
}