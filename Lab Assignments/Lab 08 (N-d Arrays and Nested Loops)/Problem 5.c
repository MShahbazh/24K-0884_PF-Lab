/*Problem Statement: 
Generate a pattern of odd numbers in decreasing order starting from a user-specified number using nested loops.*/

#include<stdio.h>
int main(){
    int i,j,a;
    printf("Enter the number: ");
    scanf("%d",&a);
      if(a%2==0){
        a--;
    }
    for(i=a;i>=0;i-=2){
            for(j=a;j>=i;j-=2){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}