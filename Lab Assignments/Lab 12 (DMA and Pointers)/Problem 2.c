/*Problem Statement: Write a program to dynamically allocate memory for 2, 2D arrays of size m×n. Input the dimensions m and n and the elements of the matrices, then find the multiplication in a function by passing reference of the matrices.*/

#include<stdio.h>
#include<stdlib.h>
void product(int** x,int** y,int row1,int col1,int col2){
    int i,j,k;
    int** result=(int**)malloc(row1*sizeof(int*));
    for(i=0;i<row1;i++){
        result[i]=(int*)malloc(col2*sizeof(int));
    }
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            result[i][j]=0;
        }
    }
    printf("\n");
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            for(k=0;k<col1;k++){
            result[i][j]+=x[i][k]*y[k][j];
            }
        }
    }
    printf("\nResult Matrix\n");
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            printf("%3d",result[i][j]);
        }
    printf("\n");
    }
}
int main(){
    int m,n,m1,n1,i,j;
    printf("\nEnter the number of rows of matrix 1: ");
    scanf("%d",&m);
    printf("Enter the number of columns of matrix 1: ");
    scanf("%d",&n);
    printf("Enter the number of rows of matrix 2: ");
    scanf("%d",&m1);
    printf("Enter the number of columns of matrix 2: ");
    scanf("%d",&n1);
    if(n==m1){
        int** mat1=(int**)malloc(m*sizeof(int*));
        for(i=0;i<m;i++){
            mat1[i]=(int*)malloc(n*sizeof(int));
        }
        int** mat2=(int**)malloc(m1*sizeof(int*));
        for(i=0;i<m1;i++){
            mat2[i]=(int*)malloc(n1*sizeof(int));
        }
        printf("\nMatrix 1 Entries\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("row %d Element %d : ",i+1,j+1);
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("\nMatrix 2 Entries\n");
        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                printf("row %d Element %d : ",i+1,j+1);
                scanf("%d",&mat2[i][j]);
            }
        }
        printf("\nMatrix 1\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%2d",mat1[i][j]);
            }
            printf("\n");
        }
        printf("\nMatrix 2\n");
        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                printf("%2d",mat2[i][j]);
            }
            printf("\n");
        }
        product(mat1,mat2,m,n,n1);
    }
    else{
        printf("\nMatrix Multiplication not possible (Number of Columns of First matrix must be equal to the number of rows of Second matrix)\n");
    }
    return 0;
}