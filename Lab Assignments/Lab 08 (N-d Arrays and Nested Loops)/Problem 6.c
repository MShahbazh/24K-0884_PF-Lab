/*Problem Statement:
Write a C program to find the saddle point(s) in a given 3x3 matrix. A saddle point is an element that is the smallest in its row and the largest in its column. */
#include<stdio.h>
int main(){
     int arr[3][3];
     int arr2[3];
     int arr3[3];
     int i,j,z,v,c;
     // array fill up and printing 
     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             printf("Enter the Element of %d row and %d column: ",i+1,j+1);
             scanf("%d",&arr[i][j]);
         }
     }
          printf("\n");

     printf("Your Matrix is: \n");
        for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             printf("%3d",arr[i][j]);
         }
         printf("\n");
     }
 // in case the user enters a scalar or NULL matrix 

     
     // smallest in the rows 
     for(i=0;i<3;i++){
        z=arr[i][0];
         for(j=0;j<3;j++){
            if(arr[i][j]<z){
                z=arr[i][j];
            }
                arr2[i]=z;
         }
     }
    //  for(i=0;i<3;i++){
    //      printf("%d, ",arr2[i]);
    //  }
     // largest in the columns 
     for(i=0;i<3;i++){
         z=arr[0][i];
         for(j=0;j<3;j++){
             if(arr[j][i]>z){
                 z=arr[j][i];
             }
             arr3[i]=z;
         }
     }
    //   for(i=0;i<3;i++){
    //      printf("%d, ",arr3[i]);
    //  }
     
     // saddle points 
     printf("\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr2[i]==arr3[j]){
          
                printf("Saddle Points: %d",arr2[i]);
            }
        }
        
     
       
        
     }
     
     
    return 0;
}