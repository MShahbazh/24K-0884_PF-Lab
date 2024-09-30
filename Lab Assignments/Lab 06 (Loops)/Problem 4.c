/* Problem Statement: 
Write a program to print the following series: 1, 2, 3, 5, 8, 13.*/

#include<stdio.h>
int main(){
    int x,y,z,a,b;
    printf("Enter the number of terms you want: ");
    scanf("%d",&x);
    x=x-2;
    a=0;
    z=1;
    y=2;
    printf("1, 2, ");
    while(a!=x){
        a++;
        b=z+y;
        z=y;
        y=b;
        printf("%d, ",b);
    }
    return 0;
}