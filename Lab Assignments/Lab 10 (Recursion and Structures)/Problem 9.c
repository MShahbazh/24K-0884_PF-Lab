/*Problem Statement: Write a recursive function bubbleSort that takes an array and its size. It performs the bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if they are in the wrong order.*/

#include<stdio.h>
int sort(int arr2[],int n){
    int i,temp;
    static int limit=0;
    if(limit==0){
        limit=n;
    }
    if(n==0)return 0;
    for(i=0;i<limit-1;i++){
        if(arr2[i]>arr2[i+1]){
            temp=arr2[i+1];
            arr2[i+1]=arr2[i];
            arr2[i]=temp;
        }
}
    sort(arr2,n-1);
}
int main(){
    int size,i;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    sort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d, ",arr[i]);
    }

    return 0;
}