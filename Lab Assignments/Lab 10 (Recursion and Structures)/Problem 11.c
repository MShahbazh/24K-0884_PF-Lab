/*Problem Statement: Create a C program that defines a constant for the conversion factor of meters to kilometers. Use a static variable in a function to count how many times the function is called.*/

#include<stdio.h>
float con(float x,int i){
    static int count=0;
    if(i==0){
    float ans;
    const float fac=0.001;
    ans=x*fac;
    count++;
    return ans;
    }
    else if(i==1){
        return count;
    }
}
int main(){
    float n;
    int k=1;
    for(;k==1;){
        printf("Enter the value to convert ( 0 will end the program ): ");
        scanf("%f",&n);
        if(n==0){
            break;
        }
        printf("%.3f metres is equal to %.3f kilometres\n",n,con(n,0));
    }
    printf("The function was called %.0f times",con(n,1));
    return 0;
}