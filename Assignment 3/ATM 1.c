#include <stdio.h>
#include <string.h>

// Function declarations
int login();
void showMenu();
void checkBalance(double balance);
void deposit(double *balance);
void withdraw(double *balance);

// Main function
int main()
{
    double balance = 1000.00;
    int choice;

    printf("================================\n");
    printf("       WELCOME TO OUR ATM\n");
    printf("================================\n");

    // Verify user PIN
    if (login() == 0)
    {
        printf("\nAccess denied. Exiting system...\n");
        return 0;
    }

    printf("\nLogin successful!\n");

    // Display menu repeatedly
    do
    {
        showMenu();

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                deposit(&balance);
                break;

            case 3:
                withdraw(&balance);
                break;

            case 4:
                printf("\nThank you for using our ATM.\n");
                printf("Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}


// Function 1: Login / PIN Verification
int login()
{
    char storedPin[] = "1234";
    char enteredPin[10];
    int attempts = 0;

    while (attempts < 3)
    {
        printf("\nEnter your 4-digit PIN: ");
        scanf("%9s", enteredPin);

        if (strlen(enteredPin) == 4 &&
            strcmp(enteredPin, storedPin) == 0)
        {
            return 1;
        }
        else
        {
            attempts++;

            printf("Incorrect PIN!\n");
            printf("Attempts remaining: %d\n", 3 - attempts);
        }
    }

    return 0;
}


// Function 2: Display ATM Menu
void showMenu()
{
    printf("\n================================\n");
    printf("             ATM MENU\n");
    printf("================================\n");

    printf("1. Check Account Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("================================\n");
}


// Function 3: Check Account Balance
void checkBalance(double balance)
{
    printf("\nCurrent balance is: Ksh %.2f\n", balance);
}


// Function: Deposit Money
void deposit(double *balance)
{
    double amount;

    printf("\nEnter amount to deposit: Ksh ");
    scanf("%lf", &amount);

    if (amount < 50)
    {
        printf("\nMinimum deposit is Ksh 50.\n");
    }
    else if (amount != (int)amount || (int)amount % 50 != 0)
    {
        printf("\nInvalid amount!\n");
        printf("Deposits must be multiples of Ksh 50.\n");
    }
    else
    {
        *balance = *balance + amount;

        printf("\nDeposit successful!\n");
        printf("Amount deposited: Ksh %.2f\n", amount);
        printf("New balance: Ksh %.2f\n", *balance);
    }
}


// Function: Withdraw Money
void withdraw(double *balance)
{
    double amount;
    double transactionFee = 20.00;

    printf("\nEnter amount to withdraw: Ksh ");
    scanf("%lf", &amount);

    // Check minimum withdrawal
    if (amount < 50)
    {
        printf("\nMinimum withdrawal is Ksh 50.\n");
    }

    // Check available denominations
    else if ((int)amount % 50 != 0 || amount != (int)amount)
    {
        printf("\nInvalid amount!\n");
        printf("ATM only dispenses multiples of Ksh 50.\n");
    }

    // Check transaction fee and balance
    else
    {
        if (amount > 200)
        {
            if (amount + transactionFee > *balance)
            {
                printf("\nInsufficient balance!\n");
            }
            else
            {
                *balance = *balance - (amount + transactionFee);

                printf("\nWithdrawal successful!\n");
                printf("Amount withdrawn: Ksh %.2f\n", amount);
                printf("Transaction fee: Ksh %.2f\n", transactionFee);
                printf("Remaining balance: Ksh %.2f\n", *balance);
            }
        }
        else
        {
            if (amount > *balance)
            {
                printf("\nInsufficient balance!\n");
            }
            else
            {
                *balance = *balance - amount;

                printf("\nWithdrawal successful!\n");
                printf("Amount withdrawn: Ksh %.2f\n", amount);
                printf("Transaction fee: Ksh 0.00\n");
                printf("Remaining balance: Ksh %.2f\n", *balance);
            }
        }
    }
}


