/* Question #3
A customer asks the IT firm to develop a program in C language, which can take tax rate and
salary from the user on runtime and then calculate the tax, the user has to pay and the salary
he/she will have after paying the tax. This information is then provided to the user. */



#include<stdio.h>
int main(){ 
    float actualsal,sal,taxr,taxsal;
    printf("Enter the salary you recieved before taxes: ");
    scanf("%f",&actualsal);
    printf("Enter the tax rate(in percent): ");
    scanf("%f",&taxr);
    taxsal=(actualsal*taxr)/100;
    sal=actualsal-taxsal;
    printf("\n The amount you will be paying for taxes is: %.2f ",taxsal);
    printf("\n The salary you got after paying the taxes is: %.2f ",sal);
    return 0;
}