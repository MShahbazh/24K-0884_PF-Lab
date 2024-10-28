/*Problem Statement: 
Write a C program to multiply two matrices of size 3x3 and display the result matrix.*/

#include<stdio.h>
int main(){
    int m[3][3];
    int m2[3][3];
    int m3[3][3]={0};
    int a,b,c,i,j,k;
    for(a=0;a<3;a++){
            for(c=0;c<3;c++){
                printf("Enter the Value of 1st Matrix on row %d and column %d: ",a+1,c+1);
                scanf("%d",&m[a][c]);
            }
        }
        printf("\n");
        for(a=0;a<3;a++){
            for(c=0;c<3;c++){
                printf("Enter the Value of 2nd Matrix on row %d and column %d: ",a+1,c+1);
                scanf("%d",&m2[a][c]);
            }
        }
        printf("\nYour First matrix: \n");
    for(a=0;a<3;a++){
        for(b=0;b<3;b++){
            printf("%2d",m[a][b]);
        }
        printf("\n");
    }
    printf("\nYour Second matrix: \n");
    for(a=0;a<3;a++){
        for(b=0;b<3;b++){
            printf("%2d",m2[a][b]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for (k = 0; k < 3; k++) {
            m3[i][j] += m[i][k] * m2[k][j];
            }
        }
    }
    printf("\nThe Multiplication of both numbers gives: ");
    printf("\n");
       for(a=0;a<3;a++){
        for(b=0;b<3;b++){
            printf("%2d ",m3[a][b]);
        }
        printf("\n");
    }
    return 0;
}