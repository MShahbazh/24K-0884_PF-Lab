/*Problem Statement: Create a function that returns the maximum and minimum element in an integer array. Use this
function in the main program to find the maximum and minimum from an array entered by the
user.*/

#include<stdio.h>
void num(int arr2[], int m){
    int min,max,i,j,k;
     for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(arr2[j]>arr2[j+1]){
                k=arr2[j+1];
                arr2[j+1]=arr2[j];
                arr2[j]=k;
            }
        }
    }
    min=arr2[0];
    max=arr2[m];
    printf("Minimum Number = %d\n",min);
    printf("Maximum Number = %d",max);
}
    int main(){
    int n,i,j,k;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
     num(arr,n);
    return 0; 
}