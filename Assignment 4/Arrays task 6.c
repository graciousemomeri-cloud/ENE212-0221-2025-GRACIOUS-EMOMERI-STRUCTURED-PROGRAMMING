#include <stdio.h>

int main()
{
    int numbers[100];
    int n, i, value, position;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("Enter the value to be inserted: ");
    scanf("%d", &value);

    printf("Enter the position: ");
    scanf("%d", &position);

    if(position < 1 || position > n + 1)
    {
        printf("Invalid position.");
    }
    else
    {
        for(i = n; i >= position; i--)
        {
            numbers[i] = numbers[i - 1];
        }

        numbers[position - 1] = value;

        n++;

        printf("The new array is: ");

        for(i = 0; i < n; i++)
        {
            printf("%d ", numbers[i]);
        }
    }

    return 0;
}

