#include <stdio.h>

int main() {

int N, marks;
char regNo[30], name[100];
char grade;

printf("===== STUDENT GRADING SYSTEM =====\n");

printf("Enter the number of students: ");
scanf("%d", &N);

for (int i = 1; i <= N; i++) {

    printf("\n===== STUDENT %d =====\n", i);

    printf("Enter Registration Number: ");
    scanf("%29s", regNo);

    printf("Enter Student Name: ");
    scanf(" %99[^\n]", name);

    printf("Enter Marks: ");
    scanf("%d", &marks);

    // Validate Marks
    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered!\n");
        continue;
    }

    // Determine Grade Using Switch
    switch (marks / 10) {

        case 10:
        case 9:
        case 8:
        case 7:
            grade = 'A';
            break;

        case 6:
            grade = 'B';
            break;

        case 5:
            grade = 'C';
            break;

        case 4:
            grade = 'D';
            break;

        default:
            grade = 'F';
    }

    // Display Student Information
    printf("\n===== STUDENT INFORMATION =====\n");

    printf("Registration Number: %s\n", regNo);
    printf("Name: %s\n", name);
    printf("Marks: %d\n", marks);
    printf("Grade: %c\n", grade);

    // Determine Pass or Fail Using Switch
    switch (grade) {

        case 'A':
        case 'B':
        case 'C':
        case 'D':
            printf("Status: PASS\n");
            break;

        case 'F':
            printf("Status: FAIL\n");
            break;
    }
}

printf("\nGrading process completed Successfuly.\n");

return 0;


}
