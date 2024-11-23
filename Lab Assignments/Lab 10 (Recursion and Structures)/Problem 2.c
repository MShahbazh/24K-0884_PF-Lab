/*Problem Statement: Write a recursive function that takes a string as input and returns the reversed string.*/

#include<stdio.h>
#include<string.h>
int reversed(char v[999999],int s){
    if(s==0)return 0;
    printf("%c",v[s-1]);
    reversed(v,s-1);
}
int main(){
    char str[999999];
    int size; 
    printf("Enter the string: ");
    fgets(str,999999,stdin);
    size=strlen (str);
    reversed(str,size);
    return 0;
}