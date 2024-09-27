/* Problem Statement:
Create a program that calculates the sum of digits of a number untl the result is a single digit (e.g., 123->6)*/

#include<stdio.h>
int main(){ 
    int n,i;
 
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>=10)
    {
        i=0;
        while(n!=0){
        i=i+(n%10);
        n=n/10;}
        n=i;
    }
    printf("%d",i);
    return 0;
}