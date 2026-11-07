#include <stdio.h>
#include <string.h>

#define MAX 100

void displayMenu();
void addNumbers();
void multiplicationTable();
void checkEvenOdd();
void factorial();
void reverseNumber();

int main()
{
    int choice;

    printf("================================\n");
    printf("       C PROGRAMMING MENU       \n");
    printf("================================\n");

    do
    {
        displayMenu();

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addNumbers();
                break;

            case 2:
                multiplicationTable();
                break;

            case 3:
                checkEvenOdd();
                break;

            case 4:
                factorial();
                break;

            case 5:
                reverseNumber();
                break;

            case 6:
                printf("\nThank you for using the program!\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while(choice != 6);

    return 0;
}

void displayMenu()
{
    printf("\n---------- MENU ----------\n");
    printf("1. Addition of two numbers\n");
    printf("2. Multiplication table\n");
    printf("3. Even or Odd\n");
    printf("4. Factorial\n");
    printf("5. Reverse a number\n");
    printf("6. Exit\n");
    printf("--------------------------\n");
}

void addNumbers()
{
    int a, b, sum;

    printf("\nEnter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum = %d\n", sum);
}

void multiplicationTable()
{
    int n, i;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

void checkEvenOdd()
{
    int n;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("%d is Even.\n", n);
    }
    else
    {
        printf("%d is Odd.\n", n);
    }
}

void factorial()
{
    int n, i;
    long long fact = 1;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Factorial is not defined for negatives.\n");
        return;
    }

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %lld\n", fact);
}

void reverseNumber()
{
    int n, reverse = 0, digit;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("Reversed number = %d\n", reverse);
}
