/*Problem Statement: 
Which loop system would be better for user input? Justify your answer by creating a program
that takes a value and adds it to a variable and prints it repeatedly until the user enters a zero
value. */

/*Answer: 
All three loops can be used for user input but the do-while is more preferable as it can first take the user input (do) and then run a loop on the input according to the while condition, so it will run for atleast one time. On the other hand, the while and for loop first require a user value and a condition to run. */                                                 

#include<stdio.h>
int main(){
    int a,z;
    z=0;
    do{
        printf("\nEnter the number: ");
        scanf("%d",&a);
        z=z+a;
        printf("The new number added to the previous number gives %d",z);
    }while(a!=0);
    printf("\nThe number you entered is zero which terminates the program, thus no more number can be added.");
    return 0;
}