/*Problem Statement: Write a recursive function that calculates the sum of digits of a number. For example, if the input is 123, the output should be 6.*/

#include<stdio.h>
int sum(int x){
    if(x==0)return 0;
    return x%10+sum(x/10);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}