/*Problem Statement: Write a program that uses structures to manage flight information, including flight number, departure city, destination city, date, and available seats. Create functionalities to book a seat and display flight details. */

#include<stdio.h>
#include<string.h>
  typedef struct data{
        int num;
        char dep[9999];
        char des[9999];
        char date[9999];
        int seat;
    }data;
void print_data(data x[]){
        int j;
        printf("%-7s %-13s %-13s %-13s %-s \n","Number","Departure","Destination","Date","Seats");
        for(j=0;j<28;j++){
            printf("--");
        }
        printf("\n");
      for(j=0;j<4;j++){
        printf("%-6d| %-12s| %-12s| %-12s| %-5d|",x[j].num,x[j].dep,x[j].des,x[j].date,x[j].seat);
        printf("\n");
    }
}
int main(){
    int i,n,count=0,seats;
    char c;
    data flights[4]={
        101,"Karachi","Islamabad","21-Nov-2024",125,
        102,"Quetta","Peshawar","22-Nov-2024",100,
        103,"Islamabad","Toronto","26-Nov-2024",26,
        104,"Islamabad","Jeddah","29-Nov-2024",26
    };
    data ticket;
    print_data(flights);
    printf("\nEnter the Flight number: ");
    scanf("%d",&ticket.num);
    for(i=0;i<4;i++){
        if(ticket.num==flights[i].num){
            count++; 
            break;
        }
    }
    if(count==1){
      printf("Enter the Departure City: ");
      scanf("%s",&ticket.dep);
       printf("Enter the Destination City: ");
      scanf("%s",&ticket.des);
       printf("Enter the Date: ");
      scanf("%s",&ticket.date);
        printf("Enter the number of seats to book: ");
      scanf("%d",&seats);
      if(strcmp(ticket.dep,flights[i].dep)!=0 || strcmp(ticket.des,flights[i].des)!=0 || strcmp(ticket.date,flights[i].date)!=0  ){
          printf("\nFlight not found");
      }
      else{
          if(seats>flights[i].seat){
              printf("Seats not available");
          }
          else{
              flights[i].seat= flights[i].seat-seats;
              printf("\n");
                print_data(flights);
          printf("\nTicket Booked !");
              
          }
      }
    }
    else{
        printf("Flight not found");
    }
    return 0;
}