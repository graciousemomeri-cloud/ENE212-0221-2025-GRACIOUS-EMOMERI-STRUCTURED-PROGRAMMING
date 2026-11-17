#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int numbers[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + numbers[i];
    }

    printf("Sum of all elements is: %d", sum);

    return 0;
}
