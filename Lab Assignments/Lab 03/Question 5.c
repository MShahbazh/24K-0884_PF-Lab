/* Question #5
Construct a C program with the flowchart below. The input value of the principle must be
between 100 Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time
Period must be between 1 to 10 years. Hint: these restrictions can be displayed in the form of
message on the window. */







#include<stdio.h>
int main(){
 float amount, taxr, yrs,inter;
 printf("Enter the amount between 100Rs to 1,000,000Rs: ");
 scanf("%f",&amount);
 printf("Enter the tax rate between 5 to 10 percent: ");
 scanf("%f",&taxr);
 printf("Enter the period between 1 to 10yrs: ");
scanf("%f",&yrs);
inter=(amount*taxr*yrs)/100;
printf("\n The Simple interest of the amount %.0f in %.0f years at the rate of %.0f is %.1f percent ",amount,yrs,taxr,inter);




    return 0;
}