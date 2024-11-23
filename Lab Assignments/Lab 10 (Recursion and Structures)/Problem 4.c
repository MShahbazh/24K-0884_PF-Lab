/*Problem Statement: Write a program that use a structure to hold information about movies, such as title, genre, director, release year, and rating. Write a program that allows users to add new movies, search for movies by genre, and display all movie details.*/

#include <stdio.h>
#include <string.h>
   typedef struct movies{
      char title[100];
      char genre[100];
      char director[100];
      int year;
      float rating;
  } data;
  void print_data(data data[],int n){
      int x;
       printf("\n%-30s| %-20s| %-30s| %-6s| %-7s|\n", "Title", "Director", "Genre", "Year", "Rating");

        for(x=0;x<51;x++){
            printf("--");
        }
         printf("\n");
      for(x=0;x<n;x++){
        printf("%-30s| %-20s| %-30s| %-6d| %-7.1f|",data[x].title,data[x].director,data[x].genre,data[x].year,data[x].rating);
        printf("\n");
    }
    printf("\n");
  }

int main() {
    int i,j,size=4,ans;
    char genre[100];
    data movie[100]={
       {"Intersteller","Science Fiction,Adventure","Christopher Nolan",2014,8.8},
       {"Inception","Science Fiction,Thriller","Christopher Nolan",2010,8.3},
       {"Iron Man 2","Superhero,Action","Jon Favreau",2010,7.0},
       {"Thor:Love and Thunder","Superhero,Comedy","Taika Waititi",2022,6.3}
  };
    print_data(movie,size);

  do{
    printf("\n1.Add a Movie ?\n2.Search by Genre");
    printf("\nEnter the Corresponding Number (0 to end the program): ");
    scanf("%d",&ans);
    printf("\n");
    if(ans==1){
      printf("Add the Movie title: ");
      scanf(" %[^\n]",&movie[size].title);
      printf("Add the Movie genre: ");
      scanf(" %[^\n]",&movie[size].genre);
      printf("Add the Movie director: ");
      scanf(" %[^\n]",&movie[size].director);
      printf("Enter the year of release: ");
      scanf("%d",&movie[size].year);
      printf("Enter the rating: ");
      scanf("%f",&movie[size].rating);
      size++;
      print_data(movie,size);
    }
   else if(ans==2){
      printf("Enter the Genre: ");
    scanf(" %[^\n]",&genre);
      for(i=0,j=0;i<size;i++){
        if(strcmp(genre,movie[i].genre)==0){
          printf("Movie %d\n",j+1);
           printf("%s | %s | %s | %d | %.1f |",movie[i].title,movie[i].director,movie[i].genre,movie[i].year,movie[i].rating);
           j++;
        }
      }
      if(j==0){
        printf("No such Genre Found\n");
      }
      printf("\n");
    }
    else if(ans!=1 && ans!=0 && ans!=2){
      printf("Enter a valid number\n");
    }
  }while(ans!=0);

    return 0;
}


