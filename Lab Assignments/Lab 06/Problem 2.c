/*Problem Statement: 
Write a program to check whether a given number is a multiple digit number or not.
1. Example: 123 is a multiple digit number.
2. 6 is not a multiple digit number.
*/

#include<stdio.h>
int main(){
    int x,y=0;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x==0){
        printf("You entered a single digit number");
    }
    else {
        while(x>0){
        y=y+1;
        x=x/10;
    }
    if(y==1)
        printf("You entered a single digit number");
    else
    printf("You entered a multiple digit number");}
    return 0;
}