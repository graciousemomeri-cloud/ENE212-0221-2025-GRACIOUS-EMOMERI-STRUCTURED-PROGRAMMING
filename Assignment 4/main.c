#include <stdio.h>
#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];

int count = 0;
int rear = -1;

void insertSample(int value)
{
    rear = (rear + 1) % BUFFER_SIZE;

    buffer[rear] = value;

    if(count < BUFFER_SIZE)
    {
        count++;
    }
}

void printSamples()
{
    int i;
    int start;

    if(count == 0)
    {
        printf("The buffer is empty.\n");
        return;
    }

    start = (rear - count + 1 + BUFFER_SIZE) % BUFFER_SIZE;

    printf("Stored samples from oldest to newest: ");

    for(i = 0; i < count; i++)
    {
        printf("%d ", buffer[(start + i) % BUFFER_SIZE]);
    }

    printf("\n");
}

int main()
{
    int value, choice;

    do
    {
        printf("\n1. Insert new sample\n");
        printf("2. Print stored samples\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter sensor value: ");
            scanf("%d", &value);

            insertSample(value);
        }
        else if(choice == 2)
        {
            printSamples();
        }
        else if(choice == 3)
        {
            printf("Exiting program.\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }

    } while(choice != 3);

    return 0;
}
