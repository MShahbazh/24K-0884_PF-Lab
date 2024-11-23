/*Problem Statement: Write a recursive function linearSearch that takes an array, its size, the target element to search for, and the current index. It checks if the target is at the current index and continues searching in the subsequent indices until it either finds the target or exhausts the array.*/

#include<stdio.h>
#include<stdbool.h>
bool search(int arr2[],int n,int tar,int cur){
    if(cur==n)return false;
    if(arr2[cur]==tar){
        return true;
    }
  search(arr2,n,tar,cur+1);
    
}
int main(){
    int size,i,target,current;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Your Array is: ");
    for(i=0;i<size;i++){
        printf("%d, ",arr[i]);
    }
    printf("\nEnter the the target element: ");
    scanf("%d",&target);
    printf("Enter the current index: ");
    scanf("%d",&current);
    if(search(arr,size,target,current)==true){
        printf("Found");
    }
    else{
        printf("Not found");
    }
    
    return 0;
}