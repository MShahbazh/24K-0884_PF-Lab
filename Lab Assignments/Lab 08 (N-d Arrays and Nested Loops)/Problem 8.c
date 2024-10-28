/*Problem Statement: 
Write a C program to generate a diamond shape pattern using nested loops. The program should take the number of rows for the upper half of the diamond as input from the user.*/

#include<stdio.h>
int main(){
    int i,j,n;
   printf("Enter the maximum number of asterisks: ");
   scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=n-i;j>0;j--){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=n-i;j>0;j--){
            printf(" ");
        }
        for(j=i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}