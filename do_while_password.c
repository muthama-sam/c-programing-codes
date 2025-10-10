//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:8/10/2025
Description:do_ehile_loop_password
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    char correctPassword[] = "1234";  

    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correctPassword) == 0) {
            printf("Access granted!\n");
            break;  
        } else {
            printf("Incorrect password, try again.\n");
        }

    } while (1);  

    return 0;

}