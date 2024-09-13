/*
Question 4
An online shopping store is providing discounts on the items due to the Eid. If
the cost of items is less than 2000 it will give a discount up to 5%. If the cost of
shopping is 2000 to 4000, a 10% discount will be applied. If the cost of
shopping is 4000 to 6000, a 20% discount will be applied. If it&#39;s more than 6000
then a 35% discount will be applied to the cost of shopping. Print the actual
amount, saved amount and the amount after discount. The Minimum amount
eligible for a discount is 500.

*/

#include<stdio.h>
int main(){
float amt,dis,afdis,sav;
printf("Enter the amount: ");
scanf("%f",&amt);
if(amt>=500&&amt<2000)
{
    printf("The discount of 5%% will be applied");
    dis=0.05;
}
else if(amt>=2000 && amt<4000)
{
    printf("The discount of 10%% will be applied");
    dis=0.1;
}
else if(amt>=4000 && amt<6000)
{
    printf("The discount of 20%% will be applied");
    dis=0.2;
}
else if(amt>=6000)
{
    printf("The discount of 35%% will be applied");
    dis=0.35;
}
else 
{
    printf("No discount will be given on amount less than 500");
    dis=0; 
}
sav=dis*amt;
afdis=amt-sav;
printf("\n Original Amount: %.2f",amt);
printf("\n Saved amount: %.2f",sav);
printf("\n Amount to be payed after discount: %.2f",afdis);
return 0;
}






