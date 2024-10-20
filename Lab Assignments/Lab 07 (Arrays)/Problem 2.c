/*Problem Statement:
Write a program in C to read n number of values in an array and display it in reverse
order
Input: {1,2,3,4,5,6,7,8,9}
Output: 9 8 7 6 5 4 3 2 1
*/

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number of terms: ");
    scanf("%d",&a);
    int rev[a];
    for(b=0;b<a;b++){
        printf("Enter the number: ");
        scanf("%d",&rev[b]);
    }
    printf("\nInput: ");
    for(c=0;c<a;c++){
        printf("%d ",rev[c]);
    }
    printf("\nOutput: ");
    for(c=a-1;c>=0;c--){
        printf("%d ",rev[c]);
    }
    return 0;
}