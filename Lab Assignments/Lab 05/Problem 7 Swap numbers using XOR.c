/* Problem Statement:
Write a program to swap two numbers using bitwise XOR. */

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the First number a: ");
    scanf("%d",&a);
    printf("Enter the Second number b: ");
    scanf("%d",&b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("a= %d \nb= %d",a,b);
    return 0;
}