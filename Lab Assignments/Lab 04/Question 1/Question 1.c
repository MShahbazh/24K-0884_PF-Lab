/* Question 1
Write a C program to check whether a number is multiple of 3 or not. If it is
then print “This number is multiple of 3”, otherwise print “This number is not
multiple of 3”.*/

#include<stdio.h>
int main(){
int a;
printf("Enter the number:");
scanf("%d",&a);
if(a%3==0)
printf("\n %d is a multiple of 3 ",a);
else
printf("\n 3 is not a multiple of 3");
return 0;
}