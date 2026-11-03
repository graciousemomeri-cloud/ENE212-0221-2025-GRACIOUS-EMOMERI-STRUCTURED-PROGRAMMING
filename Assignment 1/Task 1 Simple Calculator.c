#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Addition = %d\n", num1 + num2);
    printf("Subtraction = %d\n", num1 - num2);
    printf("Multiplication = %d\n", num1 * num2);

    if (num2 != 0)
    {
        printf("Division = %.2f\n", (float)num1 / num2);
        printf("Modulus = %d\n", num1 % num2);
    }
    else
    {
        printf("Cannot divide by zero.\n");
    }
  return 0;
}
