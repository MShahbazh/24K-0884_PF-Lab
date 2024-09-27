/*Problem Statement:
Develop a program that uses logical operators to determine if a person is eligible for a loan based on age, income, and credit score.*/

#include<stdio.h>
int main(){
    int age,income,score;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>18&&age<80){
        printf("Enter your monthly income: ");
        scanf("%d",&income);
        printf("Enter your credit score: ");
        scanf("%d",&score);
        if(income>=2000&&score>=700)
        printf("You are eligible for the loan");
        else 
        printf("You are not eligible for the laon");
    }
    else 
    printf("Your not eligible for loan \nReason: Age");
    return 0;
}