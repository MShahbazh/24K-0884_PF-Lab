/*Problem Statement: 
Write a C Program to find the minimum and maximum number in an array.
Input: {4,1,6,8,10,21,8,9,2,6}
Output:
Minimum Number = 1
Maximum Number = 21
*/

#include<stdio.h>
int printarr(int n,int arr2[n]){
    int b;
    printf("\nThe numbers you entered are: ");
    for(b=0;b<n;b++){
        printf("%d, ",arr2[b]);
    }
}
int main(){
    int x,y,max,min,c;
    printf("Enter the number of terms: ");
    scanf("%d",&x);

    int arr[x];
    for(y=0;y<x;y++){
        printf("Enter the number: ");
        scanf("%d",&arr[y]);
    }
    printarr(x,arr);
    max=arr[0];
    min=arr[0];
    for(c=0;c<x;c++){
        if(max<arr[c]){
            max=arr[c];
        }
        if(min>arr[c]){
            min=arr[c];
        }
    }
    printf("\nMaximum Number: %d",max);
    printf("\nMinimum Number: %d",min);
    return 0;
}