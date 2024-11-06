/*Problem Statement: Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values.*/

#include<stdio.h> 
void swapIntegers(int i, int j){
    int a;
    a=i;
    i=j;
    j=a;
    printf("Number 1= %d",i);
    printf("\nNumber 2= %d",j);
    
}
int main(){
    int x,y;
    printf("Enter your first number as Number 1= ");
    scanf("%d",&x);
    printf("Enter your second number as Number 2= ");
    scanf("%d",&y);
    swapIntegers(x,y);
    return 0;
}






