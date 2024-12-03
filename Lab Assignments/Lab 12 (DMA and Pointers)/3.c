#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int* ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&ptr[i]);
        count+=ptr[i];
    }
    printf("Sum of elements of array is %d",count);
    free(ptr);
    return 0;
}