//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:1/10/2025
Description:Exam Eligibility 
*/

int main() {
    float attendance, average_marks;

    //prompt to input values 
    printf("Enter attendance percentage: ");
    scanf("%f%", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &average_marks);

    // Check eligibility
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for exam \n");
    } else {
        printf("Not eligible for exam \n");
    }

    return 0;
}