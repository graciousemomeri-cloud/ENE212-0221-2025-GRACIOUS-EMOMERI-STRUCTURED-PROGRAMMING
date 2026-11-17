#include <stdio.h>

int main()
{
    int n, i;
    int numbers[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("The values stored in the array are: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\nThe values in reverse order are: ");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
