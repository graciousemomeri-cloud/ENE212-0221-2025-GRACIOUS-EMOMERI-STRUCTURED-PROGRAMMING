#include <stdio.h>
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

    // Determine Grade
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    }
    else if (marks >= 60 && marks < 70) {
        grade = 'B';
    }
    else if (marks >= 50 && marks < 60) {
        grade = 'C';
    }
    else if (marks >= 40 && marks < 50) {
        grade = 'D';
    }
    else if (marks >= 0 && marks < 40) {
        grade = 'F';
    }
    else {
        printf("Invalid marks entered!\n");
        continue;
    }

    // Display Student Information
    printf("\n===== STUDENT INFORMATION =====\n");

    printf("Registration Number: %s\n", regNo);
    printf("Name: %s\n", name);
    printf("Marks: %d\n", marks);
    printf("Grade: %c\n", grade);

    // Determine Pass or Fail
    if (marks >= 40) {
        printf("Status: PASS\n");
    }
    else {
        printf("Status: FAIL\n");
    }
}

printf("\nGrading process completed Successfuly.\n");

return 0;

}
