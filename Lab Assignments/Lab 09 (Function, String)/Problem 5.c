/*Problem Statement: Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
For example: "madam", "racecar", "level", "radar".*/

#include <stdio.h>
#include<string.h>
int main() {
    int i,j,a,n,k,words;
    printf("Enter the number of words you want to enter: ");
    scanf("%d",&words);
    char str[words][9999];
    for(i=0;i<words;i++){
        printf("Enter the word(%d) : ",i+1);
        scanf("%s",str[i]);
    }
    for(a=0;a<words;a++){
        n=0;
    for(i=0;str[a][i]!='\0';i++){
        n++;
    }
    for(i=0,j=n-1;i<j;i++,j--){
        k=0;
        if(str[a][i]!=str[a][j]){
            k++;
        }
    }

        if(k==0)
        printf("%s : Palindrome\n",str[a]);
        else
        printf("%s : Not Palindrome\n",str[a]);
    }
    return 0;
}