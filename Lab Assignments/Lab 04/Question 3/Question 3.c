/*
Question 3
Write a C program to input a character from the user and check whether the
given character is a small alphabet, capital alphabet, digit, or special character,
using if else.

*/
#include<stdio.h>
int main(){
char a;
printf("\n Enter the Character:");
scanf(" %c",&a);
if(a>=65 && a<=90)
    printf("\n %c is a capital letter",a);
else if(a>=97 && a<=122)
    printf("\n %c is a small letter",a);
else if(a>='0'&&a<='9')
    printf("\n %c is a digit",a);
else 
    printf("\n %c is a special character:");
return 0;
}