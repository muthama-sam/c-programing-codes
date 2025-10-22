//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:22/10/2025
Description:calculateFare()
*/

#include <stdio.h>

float Fare(float distance) {
    float rate = 50;
    return distance * rate;
}

int main() {
    float distance;
    printf("Enter distance traveled in km: ");
    scanf("%f", &distance);

    printf("Total Fare: KSh. %.2f\n", Fare(distance));
    return 0;
}
    