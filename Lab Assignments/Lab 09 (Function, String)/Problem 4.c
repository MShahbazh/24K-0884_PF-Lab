/*Problem Statement: Write a program that initializes a 2D character array with a list of words. Then, take a
word as input from the user and check if it exists in the array. Display "Found" if it’s there,
otherwise display "Not Found".*/

#include<stdio.h>
#include<string.h>
int main(){
    char s[3][4]={
        {'A','B','C','\0'},
        {'D','E','F','\0'},
        {'G','H','I','\0'}
    };
    char s2[99999];
    char s3[99999];
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%2c",s[i][j]);
        }
        printf("\n");
    }
    printf("Enter the word you want to find: ");
    scanf("%s",&s2);
    k=0;
    // row           
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            s3[j]=s[i][j];
            if(strstr(s3,s2)){           
                k=1;
                break;
            }
        }
    }
    if(k==1){
        printf("Found");
        return 0;
    }
    else{
    //column
    for(i=0;i<4;i++){
       
        for(j=0;j<4;j++){
            s3[j]=s[j][i];
            
        }
            if(strstr(s3,s2)){
  k=1;
  break; 
            }
    }
        if(k==1){
        printf("Found");
        return 0;
    }
    }
    if(k==0){
        printf("Not Found");
    }       
    return 0;
}

