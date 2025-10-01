//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:1/10/2025
Description:Data bundles offer
*/
#include <stdio.h>

int main() {
    int option;

    // Display the menu
    printf("Data Bundles Menu\n");
    printf("Option Bundle Cost\n");
    printf("1.     100MB  @50  KES\n");
    printf("2.     500MB  @200 KES\n");
    printf("3.     1GB    @250 KES\n");
    printf("4.     2GB    @600 KES\n");
    

    // Ask the user for their option 
    printf("Enter your choice (1-4): ");
    scanf("%d", &option);

    // Display result as per the selected option 
    switch (option) {
        case 1:
            printf("You selected: 100 MB for 50 KES\n");
            break;
        case 2:
            printf("You selected: 500 MB for 200 KES\n");
            break;
        case 3:
            printf("You selected: 1 GB for 250 KES\n");
            break;
        case 4:
            printf("You selected: 2 GB for 600 KES\n");
            break;
        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}