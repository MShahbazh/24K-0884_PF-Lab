/* Question #6
Construct a C program where you calculate the slope of two point (5,4), (3,2). Use format
specifiers to cap the result to 3 decimal places. */

#include<stdio.h>
int main(){
    float x1,y1,x2,y2, m;
    printf("Enter the first set of points (x1,y1): ");
    scanf("%f,%f",&x1,&y1);
    printf("Enter the second set of points (x2,y2): ");
    scanf("%f,%f",&x2,&y2);
    m=(y2-y1)/(x2-x1);
    printf("The slope of graph containing the sets (%.0f,%.0f) and (%.0f,%.0f) is %.3f",x1,y1,x2,y2,m);
    return 0;
}