/* Question #2
Write a C program that takes two integer values as input from the user. Then swap the values taken from the user and display the output of the variables. */


#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter the first number as 'a': ");
    scanf("%d",&a);
    printf("Enter the second number as 'b': ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The value of a is %d, whereas the value of b is %d",a,b);

 return 0;
} 