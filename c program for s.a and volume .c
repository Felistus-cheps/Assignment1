#include<stdio.h>

int main(){
    float pie=3.142;
    float r;
    float h;
    
    printf("enter radius \n");
    scanf("%f", &r);
    
    printf("enter height \n");
    scanf("%f, &h");
    
    //calculate volume 
    float volume;
    volume =(pie*r*r*h);
    printf("volume= %f \n",volume);
    
    //calculate surface_area 
    float surface_area;
    surface_area=(2*pie*r*r+2*pie*r*h);
    printf("surface_area= %f\n",surface_area);

    return 0;
}