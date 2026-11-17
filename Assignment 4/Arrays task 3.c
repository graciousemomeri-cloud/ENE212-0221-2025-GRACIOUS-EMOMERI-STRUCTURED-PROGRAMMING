#include <stdio.h>

int main()
{
    int numbers[100];
    int n, i, j, count;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("The unique elements are: ");

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(numbers[i] == numbers[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            printf("%d ", numbers[i]);
        }
    }

    return 0;
}
