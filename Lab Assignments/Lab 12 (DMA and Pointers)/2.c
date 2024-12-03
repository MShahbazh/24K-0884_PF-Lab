#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,i,j;
    printf("Enter the rows: ");
    scanf("%d",&m);
    printf("Enter the columns: ");
    scanf("%d",&n);
    int** mat1=(int**)malloc(m*sizeof(int*));
    for(i=0;i<n;i++){
        mat1[i]=(int*)malloc(n*sizeof(int));
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("row %d column %d: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nMatrix 1\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%2d",mat1[i][j]);
        }
        printf("\n");
    }

    return 0;
}