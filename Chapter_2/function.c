#include <stdio.h>
float factorial(float x)
{
    float fact;
    if (x == 1)
    {
        return 1;
    }
    else
    {
        fact = x * factorial(x - 1);
        return fact;
    }
}

// void multiple(int number);
void multiple( int number){
    int i;

    for (i = 1; i <= 10; i++)
            {
                printf("%d*%d is %d\n", number, i, i * number);
            }
}
int main()
{
    float fact, remainder;
    int number;
    int choice, i;
    char ch;
    do
    {
        printf("Choose the following for the task you want:\n");
        printf("1. For factorial\n");
        printf("2. For positive  negative or zero\n");
        printf("3. For multiple:\n");
        printf("4. For odd and even determination\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number:");
            scanf("%d", &number);
            fact = factorial(number);
            printf("Factorial of %d is %.0f", number, fact);
            break;
        case 2:
            printf("Enter any number:");
            scanf("%d", &number);
            if (number > 0)
            {
                printf("%d is positive number", number);
            }
            else if (number < 0)
            {
                printf("%d is negative number", number);
            }
            else
            {
                printf("%d is zero", number);
            }
            break;
        case 3:
            printf("Enter any number:");
            scanf("%d", &number);
            multiple(number);
            break;
        case 4:
            printf("Enter any number:");
            scanf("%d", &number);
            if (number % 2 == 0.0)
            {
                printf("%d is even number:", number);
            }
            else
            {
                printf("%d is odd number:", number);
            }
        }
        printf("\n\nDo you want to continue:");
        scanf(" %c", &ch);
        printf("\n");
    } while (ch == 'y' || ch == 'Y');

        return 0;
}