/*
Name: Samuel Muthama 
Reg No:CT101/G/26523/25
Date:6/10/1/2025
Description:storing student marks in results file
*/
#include <stdio.h>

struct Student {
    char name[30];
    int reg_no;
    float total_marks;
};

int main() {
    FILE *fptr;
    struct Student s;

    fptr = fopen("results.dat", "rb");  
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Name\t\tRegNo\tMarks\n");
    printf("-----------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, fptr)) {
        printf("%s\t%d\t%.2f\n", s.name, s.reg_no, s.total_marks);
    }

    fclose(fptr);
    return 0;
}