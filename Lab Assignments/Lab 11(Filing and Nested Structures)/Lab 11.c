// Name: Muhammad Shahbaz Hassan
// Roll Number: 24K-0884
// Date: 02/12/2024
// Description: Programming Fundamentals Lab 11 Task | Filing and Nested Structures 
// I used a single file to store data as i find it easier to use the fgets function and to read and write data from the file. Although this would make the program lenghty but filing with the help of strings make it easier to do CRUD operations.

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct player{
char name[20];
char team[20];
};

struct bowl{
char type[10]; // seemer, pacer, spinner// N/A
char arm[5]; //left or right
struct player ply;
};

struct bat{
char type[10]; // top order, middle order, lower order
char handed[8]; //lefty or righty
struct bowl ply2;
};

void add_data(struct bat* x){
    int n;
    printf("Enter the Players's name: ");
    scanf(" %[^\n]",x->ply2.ply.name);
    printf("Enter the Players's Team name: ");
    scanf(" %[^\n]",x->ply2.ply.team);
    printf("Enter the Bowler type: ");
    scanf(" %[^\n]",x->ply2.type);
    printf("Enter the Bowler's arm: ");
    scanf(" %[^\n]",x->ply2.arm);
    printf("Enter the Batsman type: ");
    scanf(" %[^\n]",x->type);
    printf("Enter the Batsman Hand: ");
    scanf(" %[^\n]",x->handed);
}

void display_data(){
    int i=1;
    char line[100];
    FILE* ptr=fopen("Player.txt","a+");
    for(;fgets(line,sizeof(line),ptr);){
        line[strcspn(line,"\n")]='\0';
        if(i%6!=0)
        {printf("%s ",line);}
        else
        {printf("%s\n",line);}
        i++;
    }
}

void update_data(){
    int i=0,j;
    char name[100];
    char line[100];
    char new[100];
    FILE* ptr=fopen("Player.txt","a+");
    FILE* ptr2=fopen("temp.txt","a+");
    printf("Enter the name of player whose info you want to update: ");
    scanf(" %[^\n]",name);
    for(;fgets(line,sizeof(line),ptr);){
        line[strcspn(line,"\n")]='\0';
        if(strcmp(line,name)==0){
            i++;
        }
    }
    if(i>0){
        rewind(ptr);
        for(;fgets(line,sizeof(line),ptr);){
             line[strcspn(line,"\n")]='\0';
                if(strcmp(line,name)==0){
                    printf("\n1.Name\n2.Team\n3.Bowler Type\n4.Bowler Arm\n5.Batsman type\n6.Batsman Arm\n");
                    printf("What info of the player you want to change: ");
                    scanf("%d",&j);
                    if(j==1){
                        printf("Enter the new name: ");
                        scanf(" %[^\n]",new);
                        fprintf(ptr2,"%s\n",new);
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                    fgets(line,sizeof(line),ptr);
                    line[strcspn(line,"\n")]='\0';
                    if(j==2){
                        printf("Enter the new team name: ");
                        scanf(" %[^\n]",new);
                        fprintf(ptr2,"%s\n",new);
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                    fgets(line,sizeof(line),ptr);
                    line[strcspn(line,"\n")]='\0';
                    if(j==3){
                        printf("Enter the new bowler type: ");
                        scanf(" %[^\n]",new);
                        fprintf(ptr2,"%s\n",new);
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                    fgets(line,sizeof(line),ptr);
                    line[strcspn(line,"\n")]='\0';
                    if(j==4){
                        printf("Enter the new bowler arm: ");
                        scanf(" %[^\n]",new);
                        fprintf(ptr2,"%s\n",new);
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                    fgets(line,sizeof(line),ptr);
                    line[strcspn(line,"\n")]='\0';
                    if(j==5){
                        printf("Enter the new batsman hand: ");
                        scanf(" %[^\n]",new);
                        fprintf(ptr2,"%s\n",new);
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                    fgets(line,sizeof(line),ptr);
                    line[strcspn(line,"\n")]='\0';
                    if(j==6){
                        printf("Enter the new batsman arm: ");
                        scanf(" %[^\n]",new);
                        fprintf(ptr2,"%s\n",new);
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                }
                else{
                    fprintf(ptr2,"%s\n",line);
                }
        }
    }
    else{
        printf("Player does not exist");
    }
    fclose(ptr);
    fclose(ptr2);
    remove("Player.txt");
    rename("temp.txt","Player.txt");
}

void delete_data(){
    int i=0,j;
    char name[100];
    char line[100];
    FILE* ptr=fopen("Player.txt","a+");
    FILE* ptr2=fopen("temp.txt","a+");
    printf("Enter the name of player whose info you want to update: ");
    scanf(" %[^\n]",name);
    for(;fgets(line,sizeof(line),ptr);){
        line[strcspn(line,"\n")]='\0';
        if(strcmp(line,name)==0){
            i++;
        }
    }
    if(i>0){
        rewind(ptr);
        for(;fgets(line,sizeof(line),ptr);){
             line[strcspn(line,"\n")]='\0';
                if(strcmp(line,name)==0){
                    printf("\n1.Name\n2.Team\n3.Bowler Type\n4.Bowler Arm\n5.Batsman type\n6.Batsman Arm\n");
                    printf("What info of the player you want to delete (it will add N/A for that field): ");
                    scanf("%d",&j);
                    if(j==1){
                        fprintf(ptr2,"%s\n","N/A");
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                    fgets(line,sizeof(line),ptr);
                    line[strcspn(line,"\n")]='\0';
                    if(j==2){
                          fprintf(ptr2,"%s\n","N/A");
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                    fgets(line,sizeof(line),ptr);
                    line[strcspn(line,"\n")]='\0';
                    if(j==3){
                         fprintf(ptr2,"%s\n","N/A");
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                    fgets(line,sizeof(line),ptr);
                    line[strcspn(line,"\n")]='\0';
                    if(j==4){
                         fprintf(ptr2,"%s\n","N/A");
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                    fgets(line,sizeof(line),ptr);
                    line[strcspn(line,"\n")]='\0';
                    if(j==5){
                          fprintf(ptr2,"%s\n","N/A");
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                    fgets(line,sizeof(line),ptr);
                    line[strcspn(line,"\n")]='\0';
                    if(j==6){
                         fprintf(ptr2,"%s\n","N/A");
                    }
                    else{
                        fprintf(ptr2,"%s\n",line);
                    }
                }
                else{
                    fprintf(ptr2,"%s\n",line);
                }
        }
    }
    else{
        printf("Player does not exist");
    }
    fclose(ptr);
    fclose(ptr2);
    remove("Player.txt");
    rename("temp.txt","Player.txt");
}

int main(){
    int n;
    bool loop=true;
    struct bat player;
    printf("1.Add\n2.Display\n3.Update\n4.Delete\n5.Exit");
    while(loop){
        printf("\nEnter the Corresponding Number: ");
        scanf("%d",&n);
        if(n==1){
            add_data(&player);
            FILE* ptr=fopen("Player.txt","a+");
            fprintf(ptr,"%s\n%s\n%s\n%s\n%s\n%s\n",player.ply2.ply.name,player.ply2.ply.team,player.ply2.type,player.ply2.arm,player.type,player.handed);
            fclose(ptr);
        }
        else if(n==2){
            display_data();
        }
        else if(n==3){
            update_data();
        }
        else if(n==4){
            delete_data();
        }
        else if(n==5){
            loop=false;
        }
    }
    return 0;
}