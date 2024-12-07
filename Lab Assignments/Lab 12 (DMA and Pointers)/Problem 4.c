/*Problem Statement: Create a nested structure for a library management system. Use a structure Book (fields: title, author, publicationYear) inside a structure Library. Input details of 5 books and display the titles of all books published after the year 2000. The structure variable must be created using DMA.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,count=0;
    typedef struct Book{
        char title[50];
        char author[50];
        int publicationYear;   
    }Book;
    typedef struct Library{
        Book books;
    }Library;
    Library* ptr=(Library*)malloc(5*sizeof(Library));
        printf("\nEnter the details for books\n");
    for(i=0;i<5;i++){
        printf("Enter the title of the book %d: ",i+1);
        scanf(" %[^\n]",&ptr[i].books.title);
        printf("Enter the name of the author: ");
        scanf(" %[^\n]",&ptr[i].books.author);
        printf("Enter the Publication Year: ");
        scanf("%d",&ptr[i].books.publicationYear);
        printf("\n");
    }
    printf("\nThe data you entered is: ");
    printf("\n%-8s | %-8s | %-8s\n","Title","Author","Publication Year");
    for(i=0;i<5;i++){
        printf("%-8s | %-8s | %-8d\n",ptr[i].books.title,ptr[i].books.author,ptr[i].books.publicationYear);
    }
    for(i=0;i<5;i++){
        if(ptr[i].books.publicationYear>2000){
            count++;
        }
    }
    if(count>0){
        printf("\nThe Data of books published after year 2000: ");
        printf("\n%-8s | %-8s | %-8s\n","Title","Author","Publication Year");
        for(i=0;i<5;i++){
        if(ptr[i].books.publicationYear>2000){
        printf("%-8s | %-8s | %-8d\n",ptr[i].books.title,ptr[i].books.author,ptr[i].books.publicationYear);
        }            
        }
    }
    else{
        printf("No Books in the record exist which was published after year 2000");
    }
    return 0;
}