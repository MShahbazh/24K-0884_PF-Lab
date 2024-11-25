#include<stdio.h>

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

int main(){
    struct player p;
    struct bowl bowl;
    struct bat bat;

    int i;
    printf("1.Add\n2.Display");
    printf("\nEnter: ");
    scanf("%d",&i);
    if(i==1){
        FILE* ptr=fopen("p.txt","a+");
        printf("Enter the Name of player: ");
        scanf("%s",&p.name);
        printf("Enter the name of team of player: ");
        scanf("%s",&p.team);
        printf("Enter the bowler type: ");
        scanf("%s",&bowl.type);
        printf("Enter the bowler arm: ");
        scanf("%s",&bowl.arm);
        printf("Enter the batter type: ");
        scanf("%s",&bat.type);
        printf("Enter the batter hand: ");
        scanf("%s",&bat.handed);
        fprintf(ptr,"%s,%s,%s,%s,%s,%s",p.name,p.team,bowl.type,bowl.arm,bat.type,bat.handed);
        fclose(ptr);
    }
    else if(i==2){
            char name[100];
            // char temp1[100];
            // char temp2[100];
            int k;
            FILE* ptr=fopen("p.txt","r");
            printf("Enter the name: ");
            scanf(" %[^\n]",&name);
            for(k=0;k<9;k++){
                fscanf(ptr,"%s %s %s %s %s %s",&p.name,&p.team,&bowl.type,&bowl.arm,&bat.type,&bat.handed);
                
            }
           
    }




    return 0;
}