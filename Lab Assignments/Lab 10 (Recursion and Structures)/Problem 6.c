/*Define a structure to represent a point in 2D space with x and y coordinates. Implement functions to calculate the distance between two points and to check if a point lies within a specific rectangular boundary.*/

#include <stdio.h>
#include<math.h>
int main(){
    int n;
    float dis;
    struct points{
        int x;
        int y;
    }p1,p2,p3;
    printf("1.Calculate distance between two points\n2.Calculate whether a point is in a rectangular body or not\n");
    printf("\nEnter the Corresponding number: ");
    scanf("%d",&n);
    if(n==1){
        printf("Enter the (x,y) coordinates of the first point: ");
        scanf("%d,%d",&p1.x,&p1.y);
        printf("Enter the (x,y) coordinates of the second point: ");
        scanf("%d,%d",&p2.x,&p2.y);
        dis=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
        printf("The distance between two points is %.3f units",dis);
    }
    else if (n==2){
      printf("Enter the coordinates of top left corner of rectangle (x,y): ");
      scanf("%d,%d",&p1.x,&p1.y);
      printf("Enter the coordinates of bottom right corner of rectangle (x,y): ");
      scanf("%d,%d",&p2.x,&p2.y);
      printf("Enter the coordinates of the point you want to check (x,y): ");
      scanf("%d,%d",&p3.x,&p3.y);
      if((p3.x>=p1.x && p3.x<=p2.x) && (p3.y>=p1.y && p3.y<=p2.y))
          printf("Points (%d,%d) lie in the rectangle",p3.x,p3.y);
      else
          printf("Point (%d,%d) do not lie in the rectangle",p3.x,p3.y);
    }
    return 0;
}



