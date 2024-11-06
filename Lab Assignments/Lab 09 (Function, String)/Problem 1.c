// Problem Statement: Write a C function that takes two numbers as input and returns their product. 

#include<stdio.h>
int prod(int x,int y){
    return x*y;
}
int main(){
    int i,j;
    printf("Enter the first number: ");
    scanf("%d",&i);
    printf("Enter the second number: ");
    scanf("%d",&j);
    printf("Ther Product of two numbers is: %d",prod(i,j));
    return 0;
}