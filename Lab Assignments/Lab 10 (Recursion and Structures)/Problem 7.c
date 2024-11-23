/*Problem Statement: Create a program with a constant that defines the maximum allowable temperature (in Celsius). Write a function to compare input temperatures and use a static variable to count how many times temperatures exceeded the limit.*/

/*Problem Statement: Create a program with a constant that defines the maximum allowable temperature (in Celsius). Write a function to compare input temperatures and use a static variable to count how many times temperatures exceeded the limit.*/

#include <stdio.h>
    const int max=2000;
int check(int n){
    static int count=0;
    if(n>max){
        count++;
    }
    return count;
}
int main() {
    int i,j,temp;
    printf("Max Temperature: %d\n",max);
    do{
        printf("Enter the Temperature ( 0 to exit the program ): ");
        scanf("%d",&temp);
        check(temp);
        printf("\n");
    }while(temp!=0);
        printf("Temperature values exceeded %d times",check(temp));
    return 0;
}