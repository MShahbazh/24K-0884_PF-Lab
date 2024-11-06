// Problem Statement: Write a function that checks if a given number is even or odd.

#include<stdio.h>
void check(int a){
    if(a%2==0){
        printf("%d is an even number",a);
    }
    else
    printf("%d is an odd number",a);
}
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    check(n);
    return 0;
}
