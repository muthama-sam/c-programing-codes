//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:1/10/2025
Description:Water bill calculator 
*/
#include <stdio.h>
int main() {
float units,charge_per_unit,total_bill;
//prompt the user to enter water units

    printf("enter water units:");
    scanf("%f",&units);
    
    if (units >0 && units<=30){
    charge_per_unit=20;
    
    }
    else if(units >30 && units<=60){
    charge_per_unit=25;
    }
    
    else if(units >60){
    charge_per_unit=30;
    }
    total_bill=units*charge_per_unit;
    
    printf("total_bill is %.2fKES",total_bill);

    return 0;
}