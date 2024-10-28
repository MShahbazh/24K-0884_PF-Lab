/*Problem Statement: 
Write a C program that generates a sequence of prime numbers within a given range using nested loops.
*/

#include<stdio.h>
int main(){
    int a,b,i,j,x;
    printf("Enter the Starting Number: ");
    scanf("%d",&a);
    printf("Enter the Ending Number: ");
    scanf("%d",&b);
    for(i=a;i<=b;i++){
            x=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){ 
                x++;
            }
        }
        if(x==0 && i>1){
             printf("%d, ",i);
        }
    }
    return 0;
}