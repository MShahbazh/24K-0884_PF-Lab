/*Problem Statement: Implement a function that checks if a given integer is a prime number. Use this function in the
main program to check if numbers entered by the user are prime.*/

#include<stdio.h>
#include<string.h>
void check(int x){
    int i,j,k=0;
    if(x==0 || x==1){
        printf("%d is not prime nor composite",x);
    }
    else{
         for(i=2;i<x;i++){
        if(x%i==0){
            k++;
        }
    }
    if(k==0){
        printf("It is a prime number");
    }
    else{
        printf("It is not a prime number");
    } 
    }
}
int main(){
    int n;
    printf("Enter your number: ");
  scanf("%d",&n);
    check(n);
    return 0;
}


