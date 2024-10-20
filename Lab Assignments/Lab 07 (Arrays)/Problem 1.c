/*Problem Statement:
Write a C Program that takes an user input array and prints the sum of its elements.
Input: {1,2,3,4,5,6,7,8,9}
Output: 45
*/

#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter the number of terms: ");
    scanf("%d",&a);
    int sum[a];
    for(b=0;b<a;b++){
        printf("Enter the number: ");
        scanf("%d",&sum[b]);
    }
    for(b=0;b<a;b++){
        c=c+sum[b];
    }
    printf("The sum of all the elements is: %d",c);
    return 0;
}