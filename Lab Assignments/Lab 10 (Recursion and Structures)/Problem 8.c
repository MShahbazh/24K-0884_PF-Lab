/*Problem Statement: Create a structure to store details about cars in a dealership, including make, model, year, price, and mileage. Write a program that allows users to add new cars, display a list of available cars, and search for cars by make or model*/

#include<stdio.h>
#include<string.h>
typedef struct dealership_data{
    char make[100];
    char model[100];
    int year;
    int price;
    int mileage;
}data;
void print_data(data x[],int y){
    printf("\n");
    int i;
    printf("%-13s| %-13s| %-7s| %-7s| %-7s\n","Make","Model","Year","Price","Mileage");
    for(i=0;i<28;i++){
        printf("--");
    }
    printf("\n");
    for(i=0;i<y;i++){
        printf("%-13s| %-13s| %-7d| %-7d| %-7d\n",x[i].make,x[i].model,x[i].year,x[i].price,x[i].mileage);
    }
    printf("\n");
}
int main(){
    int size=4,i,j,k;
    char search[100];
    data cars[100]={
        {"Toyota","Corolla",2021,20000,1500},
        {"Honda","Civic",2019,18500,25000},
        {"Ford","Mustang",2020,35000,12000},
        {"Tesla","Model 3",2022,42000,5000}
    };
    printf("1. Display Available Cars\n2. Add New Cars\n3. Search Cars by Model\n4. Search Cars by Make\n\n");
   do{
    printf("Enter the Corresponding Number: ");
    scanf("%d",&k);
    if(k==1){
    print_data(cars,size);
    }
    else if(k==2){
        printf("Enter the Make: ");
        scanf(" %[^\n]",&cars[size].make);
        printf("Enter the Model: ");
        scanf(" %[^\n]",&cars[size].model);
        printf("Enter the year: ");
        scanf("%d",&cars[size].year);
        printf("Enter the price(in dollars): ");
        scanf("%d",&cars[size].price);
        printf("Enter the mileage(in miles): ");
        scanf("%d",&cars[size].mileage);
        printf("New Car Info Added\n");
        size++;
    }
    else if (k==3){
        printf("Enter the Model name: ");
        scanf(" %[^\n]",&search);
        for(i=0,j=0;i<size;i++){
            if(strcmp(search,cars[i].model)==0){
                printf("Cars Found: ");
                printf("\n%-13s| %-13s| %-7d| %-7d| %-7d\n",cars[i].make,cars[i].model,cars[i].year,cars[i].price,cars[i].mileage);
                j++;
            }
        }
        if(j==0){
            printf("No cars of this make found\n");
        }
    }
    else if (k==4){
        printf("Enter the make name: ");
        scanf(" %[^\n]",&search);
        for(i=0,j=0;i<size;i++){
            if(strcmp(search,cars[i].make)==0){
                printf("Cars Found: ");
                printf("\n%-13s| %-13s| %-7d| %-7d| %-7d\n",cars[i].make,cars[i].model,cars[i].year,cars[i].price,cars[i].mileage);
                j++;
            }
        }
        if(j==0){
            printf("No cars of this model found\n");
        }
    }
    else{
        printf("Enter a valid value\n");
    }
   }while(k!=0);
  return 0;
}