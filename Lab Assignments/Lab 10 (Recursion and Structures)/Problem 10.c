/*Problem Statement: Design a structure to store information about travel packages, including package name destination, duration, cost, and number of seats available. Write a program that allows users to book a travel package and display available packages.*/

#include<stdio.h>
#include<string.h>
typedef struct packages{
    char name[100];
    char des[100];
    int dur;
    int cost;
    int seats;
}data;
void print_data(data x[],int y){
    printf("\n");
    int i;
    printf("%-13s| %-13s| %-15s| %-13s| %-7s\n","Package Name","Destination","Duration(days)","Cost(dollars)","Seats Available");
    for(i=0;i<38;i++){
        printf("--");
    }
    printf("\n");
    for(i=0;i<y;i++){
        printf("%-13s| %-13s| %-15d| %-13d| %-7d\n",x[i].name,x[i].des,x[i].dur,x[i].cost,x[i].seats);
    }
    printf("\n");
}
int main(){
    int size=4,k=0,i,j;
    data book;
    data package[100]={
        {"Package 1","Maldives",7,2500,20},
        {"Package 2","France,Ialy",10,3200,30},
        {"Package 3","Dubai",5,1800,15},
        {"Package 4","Japan",14,2100,10}
    };
    do{
        print_data(package,size);
        printf("\nWant to book a package ? ( 0 for No and 1 for Yes): ");
        scanf("%d",&k);
        if(k==1){
            printf("Enter the the Package name: ");
            scanf(" %[^\n]",&book.name);
            for(i=0,j=0;i<size;i++){
                if(strcmp(book.name,package[i].name)==0){
                    j++;
                    break;
                }
            }
            if(j==0){
                printf("No such package available");
            }
            else{
                printf("Enter the destination name: ");
                scanf(" %[^\n]",&book.des);
                printf("Enter the duration: ");
                scanf(" %d",&book.dur);
                printf("Enter the cost: ");
                scanf(" %d",&book.cost);
                printf("Enter the seats you want to book: ");
                scanf(" %d",&book.seats);
                if(strcmp(book.des,package[i].des)!=0 || book.dur!=package[i].dur ){
                    printf("No such packageadfv is available");
                }
                else{
                    if(book.seats>package[i].seats){
                        printf("Not enough seats available");
                    }
                    else{
                        package[i].seats=package[i].seats-book.seats;
                        printf("Package Booked");
                    }
                }
            }
        }
        else if(k==0){
            break;
        }
        else{
            printf("Enter a Valid Number");
        }
    }while(k!=0);
    return 0;
}