#include <stdio.h>

int main()
{
    int numbers[6][4] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

    int i, j;

    printf("The elements of the 2D array are:\n");

    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", numbers[i][j]);
        }

        printf("\n");
    }

    return 0;
}

