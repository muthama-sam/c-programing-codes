/*
Name: Samuel Muthama 
Reg No:CT101/G/26523/25
Date:6/10/1/2025
Description:Storing book title in a file for borrowed books
*/
#include <stdio.h>

int main() {
    FILE *fptr;
    char title[130];

    fptr = fopen("borrowed_books.txt", "a"); 
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);  

    fprintf(fptr, "%s", title);  
    fclose(fptr);  

    printf("\nBook title successfully stored in borrowed_books.txt\n");
    return 0;
}