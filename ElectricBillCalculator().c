//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:22/10/2025
Description:CalculatotElectricBill()
*/
#include <stdio.h>

float electricbill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units > 100, units <= 200) {
        bill = units * 15;
    } else {
        bill = units * 20;
    }

    return bill;
}

int main() {
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Total bill: KSh. %.2f\n", electricbill(units));
    return 0;
}

    