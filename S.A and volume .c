//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:17/9/2025
Description:volume and surface_area
volume π*radius*height
surface area (2*π*raduus*radius)+(2*π*radius*height)
*/
#include<stdio.h>
#define pi 3.14159
int main() {
    //variable declaration
    float radius,height,volume,surface_area;
    
    printf("enter radius\n");
    scanf("%f",&radius);

    printf("enter height\n:");
    scanf("%f",&height);

    volume=pi*radius*radius*height;
    surface_area=2*pi*radius*radius+2*pi*radius*height;
    printf("volume is %f\n",volume);
    printf("surface_area is %f",surface_area);
    return 0;
}