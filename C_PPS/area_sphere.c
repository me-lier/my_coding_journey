#include <stdio.h>
int main(){
    //volume of a sphere
    float area,r;
    printf("Enter the sphere radius:- ");
    scanf("%f",&r);
    area=r*r*r*4*22/21;
    
    printf("The area of the sphere is :- %f",area);
}
