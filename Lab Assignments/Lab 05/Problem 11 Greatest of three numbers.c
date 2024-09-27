/*Problem Statement:
Write a program to find the greatest of three numbers using nested if-else statements.*/

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        printf("%d is greater than %d and %d",a,b,c);   
    }
    else if(b>c)
    printf("%d is greater than %d and %d",b,a,c);
    else 
        printf("%d is greater than %d and %d",c,a,b);
    return 0;
}