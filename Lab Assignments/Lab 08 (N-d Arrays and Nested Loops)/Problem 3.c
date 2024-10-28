/*Problem Statement: 
Create a 3D array representing 2 pages of a 3x3 matrix. Initialize it and find the sum of all the elements on each page.
*/

#include<stdio.h>
int main(){
       int i,j,k,z;
   int arr[2][3][3];
   for(i=0;i<2;i++){
       for(j=0;j<=2;j++){
            for(k=0;k<3;k++){
                printf("Value of Page %d Element at row %d and Column %d: ",i+1,j+1,k+1);
                scanf("%d",&arr[i][j][k]);
            }   
       }
       printf("\n");
       
   }
     for(i=0;i<2;i++){
       for(j=0;j<=2;j++){
            for(k=0;k<3;k++){
                   printf("%d ",arr[i][j][k]);
            
            }   
            printf("\n");
       }
       printf("\n");
      
   }
   for(i=0;i<2;i++){
       z=0;
       for(j=0;j<=2;j++){
           for(k=0;k<3;k++){
               z=z+arr[i][j][k];
           }
       }
       printf("Sum of Elements of Page %d is: %d \n",i+1,z);
   }
    return 0;
}