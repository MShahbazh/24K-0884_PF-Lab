/*Problem Statement:
Write a program that uses bitwise operators to perform encryption and decryption of a character.*/

#include<stdio.h>
int main(){
    char a;
    int b,c;
    c=245;
    printf("Write a character to encrypt: ");
    scanf(" %c",&a);
    b=a^c;
    printf("\n Encrypted character: %d",b);
    a=b^c;
   printf("\n Decrypted character: %c",a);
    return 0;
}
