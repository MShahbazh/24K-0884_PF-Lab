/* Problem Statement:
Create a program that counts the number of 1s in the binary representation of a number, using bitwise operator */

#include<stdio.h>
int main(){
    int a,x;
    x=0; 
    printf("Enter the number: ");      
    scanf("%d",&a);
    while(a!=0){
        if(a&1==1)
        x=x+1;
        a=a>>1;  
    }
    printf("%d",x);
    return 0; 
}
