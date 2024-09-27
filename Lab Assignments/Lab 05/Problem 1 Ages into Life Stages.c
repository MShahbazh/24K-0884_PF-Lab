/* Problem Statement: 
Write a program that categorizes a person's age into different life stages: Child, Teenager, Adult, and Senior, using nested if-else statements. */

#include<stdio.h>
int main(){
int age; 
printf("Enter the age: ");
scanf("%d",&age);
if (age>=0)
{
	if (age<=59)
	{
		if (age <=19)
		{
			if (age <=12)
			printf("Child");
			else 
			printf("Teenager");
		}
		else 
		printf("Adult");
	}
	else 
	printf("Senior");
}
else 
printf("Age can't be negative");
return 0;
}