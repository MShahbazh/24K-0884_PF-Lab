/*Problem Statement: 
Create a C program to calculate the following series using loop statements. 
1, 2, 2, 4, 8, 32, 256, ...*/

#include<stdio.h>
int main(){
    long long int a,b,c,d,e;
    // Sir, The number of terms after 9 gives a big number which exceeds the range of int data type so i used long long int datatype but it too fails after 11 terms. Term number greater than 11 will only display the numbers till the 11 terms and 0 for the terms after that.
    printf("Enter the number of terms you want: ");
    scanf("%lld",&a);
    a=a-2;
    b=1;
    c=2;
    d=0;
    printf("1, 2, ");
    while(d!=a){
        d++;
        e=b*c;
        b=c;
        c=e;
        printf("%lld, ",e);
    }
    return 0;
}
