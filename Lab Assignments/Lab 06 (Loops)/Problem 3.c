/* Problem Statement:
Create a program that takes a number as input and check if it is a prime or composite number.
*/

#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a==0 || a==1){
        printf("%d is not a prime nor a compsite number",a);
    }
    else{
    for(b=2;b<=a;b++){
        if(a%b==0){
            c++;
        }
    }
    if(c==1)
        printf("It is a prime number");
    else 
    printf("It is a composite number");
    }
    return 0;
}