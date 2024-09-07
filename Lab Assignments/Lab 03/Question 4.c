/* Question #4
A car travelled back and forth from point A to point B. With a distance being (single trip)
1207KM. During the forward trip fuel price was 118/liter while returning it was 123/liter.
Calculate the total fuel cost (both ways) and the fuel consumed (total trip). Use the car’s fuel
average as input from the user (Input must be positive make some restrictions on only accepting
positive input) */




#include<stdio.h>
int main(){
    float Totalfuel, Totalprice, x; 
    printf("\n Note: Fuel average must be a positive number");
    printf("\n Enter the fuel average in (km/litre) : ");
    scanf("\n %f",&x);

         Totalfuel=2414/x;
    Totalprice=(1207*241)/x;
    printf("\n Total Fuel consume: %.2f ",Totalfuel);
     printf("\n Total Fuel cost: %.2f ",Totalprice);
    
   
    


    return 0;
}
