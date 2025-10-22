//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:22/10/2025
Description:ConvertionToCelsius()
*/
#include <stdio.h>

float Celsius(float F) {
    float Celsius = (F - 32) * 5 / 9;
    return Celsius;
}

int main() {
    float F;
    printf("Enter temperature in Fahrenheit(F): ");
    scanf("%f", &F);

    printf("Temperature in Celsius: %.2f°C\n", Celsius(F));
    return 0;
}

    