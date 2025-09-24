//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:17/9/2025
Description:loan verification 
*/

#include<stdio.h>
int main(){
//variable declaration 
    float years,annual_income;
    
    printf("enter years\n");
    scanf("%f",&years);
    
    printf("enter annual_income\n");
    scanf("%f",&annual_income);
    
    if ("years =>21 and annual_income =>21000") {
    printf("congratulations you qualify for a loan\n");
    
    }else 
    printf("unfortunately, we unable to offer your loan\n");
    return 0;
}