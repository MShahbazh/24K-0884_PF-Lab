/*Problem Statement: Write a recursive function that takes an array and its size as input and prints all the elements.*/

#include<stdio.h>
#include<string.h>
int display(int x,int arr2[x]){
    if(x==0)return 0;
    display(x=x-1,arr2);
    printf("%d ",arr2[x]);
}
int main(){
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    display(n,arr);
    return 0;
}