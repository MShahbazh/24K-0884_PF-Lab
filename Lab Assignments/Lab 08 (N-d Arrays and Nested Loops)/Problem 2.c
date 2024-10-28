/* Problem Statement:
Write a program to take a 2D array input from the user and display its transpose.
*/

#include<stdio.h>
int main(){
    int arr[2][2], arr2[2][2],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter the Element of the place %d row and %d column: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your 2x2 Matrix is: \n");
      for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            arr2[j][i]=arr[i][j];
        }
    }
     printf("The Transpose of the above 2x2 Matrix is: \n");
      for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}