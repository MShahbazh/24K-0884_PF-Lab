/*Problem Statement:
Write a program that uses bitwise operators to perform encryption and decryption of a character.*/

#include<stdio.h>
int main(){
    int a,b,c;
    c=245;
    printf("Write the number to encrypt: ");
    scanf("%d",&a);
    b=a^c;
    printf("\n Encrypted character: %d",b);
    a=b^c;
   printf("\n Decrypted character: %d",a);
    return 0;
}