#include <stdio.h>
#include<stdlib.h>
int main() {
    typedef struct data{
        char name[100];
        int marks;
    }data;
    int n,i,k=1,count=0;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    data* ptr=(data*)malloc(n*sizeof(data));
    for(i=0;i<n;i++){
    printf("\nEnter the Students Name: ");
    scanf(" %[^\n]",&ptr[i].name);
    while(k==1){
    printf("Enter %s's marks(out of 100): ",ptr[i].name);
    scanf("%d",&ptr[i].marks);
    if(ptr[i].marks>=0 && ptr[i].marks<=100)
        k=0;
        else
        printf("\nInvalid Input");
    }
    count+=ptr[i].marks;
    k=1;
   }
   printf("\nThe average of class is: %d",count/n);
   free(ptr);

    return 0;
}