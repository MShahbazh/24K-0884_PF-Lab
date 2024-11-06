/*Problem Statement: Create a function that reverses a given string and returns the reversed string. Use this function
in the main program to display the reversed string entered by the user.*/

#include<stdio.h>
#include<string.h>
void reversed(char s0[] ){
    int i,j,k;
      char s2[9999];
    for(i=0,j=strlen(s0)-1;s0[i]!='\0';i++,j--){
         s2[i]=s0[j];   
    }
    printf("%s",s2);
}
int main(){
    char s[9999];
    printf("Enter your word: ");
    fgets(s,9999,stdin);
    reversed(s);
    return 0;
}
