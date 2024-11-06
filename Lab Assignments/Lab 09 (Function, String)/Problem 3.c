/* Problem Statement: Write a program that takes a destination string and a source string as input. Then, take
an integer n as input and append only the first n characters of the source string to the
destination. Print the new concatenated string. */

#include<stdio.h>
#include<string.h>
int main(){
    int x;
    char s[999999];
    char s1[999999];
    printf("Enter your source word: ");
    scanf("%s",&s);
    printf("Enter the destinaton word: ");
    scanf("%s",&s1);
    printf("Enter the number of characters of source to concatenate : ");
    scanf("%d",&x);
  strncat(s1,s,x);
    printf("%s",s1);
    return 0;
}