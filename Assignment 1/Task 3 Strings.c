#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int length;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your name is: %s\n", name);

    length = strlen(name);

    printf("Length of your name: %d characters\n", length);

    return 0;

}
