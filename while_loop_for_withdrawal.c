//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:8/10/2025
Description:while_loop_for_withdrawal
*/
#include <stdio.h>
int main (){

int amount,balance=500;
    printf("your current balance is Ksh%d\n",balance);
    
    while(balance>0){
    printf("enter amount to withdraw\n");
    scanf("%d",&amount);
    
    balance=balance-amount;
    printf("new balance is Ksh=%d\n",balance);
    }
    
    printf("insufficient balance\n");
    
    return 0;

}