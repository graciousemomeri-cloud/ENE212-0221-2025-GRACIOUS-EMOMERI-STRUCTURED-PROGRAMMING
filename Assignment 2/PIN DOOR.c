#include <stdio.h>
#include <string.h>

int main() {

char pin[20];
char correctPin[] = "1234";
int attempts = 3;
int choice;

printf("===== ELECTRONIC DOOR LOCK SYSTEM =====\n");

// PIN verification loop
while (attempts > 0) {

    printf("\nEnter your 4-digit PIN: ");
    scanf("%19s", pin);

    // Check PIN length
    if (strlen(pin) < 4) {
        printf("PIN is too short (must be 4 digits).\n");
    }
    else if (strlen(pin) > 4) {
        printf("PIN is too long (must be 4 digits).\n");
    }
    else {
        printf("PIN is exactly 4 digits.\n");

        // Check whether PIN is correct
        if (strcmp(pin, correctPin) == 0) {
            printf("\nCorrect PIN!\n");

            // Display menu
            printf("\n===== MENU =====\n");
            printf("1. Open Door\n");
            printf("2. Change Username\n");
            printf("3. Change PIN\n");
            printf("4. Exit\n");

            printf("\nChoose an option: ");
            scanf("%d", &choice);

            // Handle menu selection
            switch (choice) {

                case 1:
                    printf("Access granted. Door unlocked.\n");
                    break;

                case 2:
                    printf("Change username feature coming soon.\n");
                    break;

                case 3:
                    printf("Change PIN feature coming soon.\n");
                    break;

                case 4:
                    printf("Exiting system.\n");
                    break;

                default:
                    printf("Invalid option! Please try again.\n");
            }

            return 0;
        }
        else {
            printf("Incorrect PIN!\n");
        }
    }

    attempts--;

    if (attempts > 0) {
        printf("Remaining attempts: %d\n", attempts);
    }
}

// Lockout section
printf("\nSystem locked! Wait for 5 seconds...\n");

for (int i = 5; i >= 1; i--) {
    printf("%d...\n", i);
}

printf("You can try again now.\n");

return 0;


}
