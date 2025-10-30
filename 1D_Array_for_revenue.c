//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:30/10/2025
Description:1D array for revenue
*/
#include <stdio.h>

int main() {
    int revenue [7];
    int i;
    int sum = 0, average;
    
    printf("enter revenue for 7 days:\n");
    for(i = 0; i < 7; i++){
    printf("Day %d: \t", i + 1);
    scanf("%d", &revenue[i]);
    }
    
    for (i = 0 ; i < 7 ; i++){
    sum += revenue [i];
    }
    
    average = sum / 7 ;
    printf("\nthe sum is %d\n", sum);
    printf("the average is %d\n",average);

    return 0;
}