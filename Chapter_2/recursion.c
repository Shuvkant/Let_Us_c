#include <stdio.h>

float rec(float x)
{
    float fact;
    if (x == 1)
    {
        return 1;
    }
    else
    {
        fact = x * rec(x - 1);
        return fact;
    }
}
int main()
{
    float number;
    printf("Enter a number:");
    scanf("%f", &number);
    float fact;
    fact = rec(number);
    printf("Factorial value of %.0f is %.0f", number, fact);
}
