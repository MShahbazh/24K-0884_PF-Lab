/* Problem Statement: 
Using for-loop statement print the following series: 
65536, 32768, 10922, 2730, 546, 91, 13, 1, 0,*/

#include<stdio.h>
int main(){
    int a=65536,b;
    for(b=1;a!=0;b++){
        a=a/b;
        printf("%d, ",a);
    }
    return 0;
}