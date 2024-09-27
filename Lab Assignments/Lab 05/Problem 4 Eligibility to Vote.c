/* Problem Statement:
Create a program that checks if a person is eligible to vote based on their age and citizenship status, using logical operators. */

#include<stdio.h>
int main(){
int a;
char b;
printf("Enter your age: ");
scanf("%d",&a);
if (a>=18)
{
	printf("Citizenship Status ( Type 'Y' for Yes and 'N' for No): ");
	scanf(" %c",&b);
	if (b=='Y'||b=='y')
		printf("Eligible for voting");
	else if (b=='N'||b=='n')
		printf("Ineligible for voting \nReason: You need to be a citizen of the country to vote");
	else 
		printf("You can only type Y or N for the status, any other character will be ignored");
}
else 
	printf("You need to be atleast 18 to vote");
return 0;
}