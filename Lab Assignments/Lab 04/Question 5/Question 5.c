/*
Question 5
Write a program in C to calculate and print the Electricity bill of a given
customer. The customer id., name and unit consumed by the user should be
taken from the keyboard and display the total amount to pay to the customer.
If the bill exceeds Rs. 18000 then a surcharge of 15% will be charged on top of the bill.

*/



#include<stdio.h>
int main(){
// char name;
int id;
float unit, price,bill,sur /*name*/;
printf("\n Enter Customer id:");
scanf("%d",&id);
// printf("\n Enter your name:");
// scanf(" %c",&name);
printf("\n Enter the units consumed:");
scanf("%f",&unit);
if(unit<=199)
    price=16.20;
else if(unit>=200&&unit<300)
    price=20.10;
else if(unit>=300&&unit<500)
    price=27.10;
else 
    price=35.90;
bill=price*unit;
if(bill>18000){
    sur=bill+bill*0.15;
}
else{
    sur=bill;
}
    printf("\n Customer ID: %d", id);
    // printf("\n Customer Name: %c",name);
    printf("\n Units consumed: %.2f",unit);
    printf("\n Amount charges @Rs%.2f per unit: %.2f",price,bill);
    printf("\n Net Amount paid by the customer including any surcharge (if applicable): %.2f",sur);
return 0;
}
