#include <stdio.h>
double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}
int main()
{
    double base, result;
    int exponent;
    printf("Enter the base and exponent:");
    scanf("%lf%d", &base, &exponent);
    result = power(base, exponent);
    printf("%.0lf to the power %d is %.0lf", base, exponent, result);
    return 0;
}