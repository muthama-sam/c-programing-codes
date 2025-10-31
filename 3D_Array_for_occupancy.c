//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:30/10/2025
Description:3D array for occupancy 
*/
#include <stdio.h>
int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalroomoccupied = 0;

    srand(time(0));
    
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            chain[branch][floor][room] = rand() % 2;
            if (chain[branch][floor][room] == 1)
                    totalroomoccupied++;
            }
        }
    }
    printf("Total occupied rooms : %d\n", totalroomoccupied);

    return 0;
}