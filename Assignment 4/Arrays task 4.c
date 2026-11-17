#include <stdio.h>

int main()
{
    int numbers[100];
    int n, i, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];
    min = numbers[0];

    for(i = 1; i < n; i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }

        if(numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}
