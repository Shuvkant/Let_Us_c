#include <stdio.h>
#include <math.h>

int main()
{
    int number, i, original_number, sum, remainder, n;

    for (i = 1; i <= 50; i++)
    {
        number = i;
        original_number = number;
        sum = 0;

        // Counting number of digits
        n = 0;
        while (original_number != 0)
        {
            original_number /= 10;
            ++n;
        }
// printf("%d\n", n);}
// }

        // Calculating sum of digits raised to the power of n
        original_number = number;
        while (original_number != 0)
        {
            remainder = original_number % 10;
            sum += pow(remainder, n);
            original_number /= 10;
        }

        // Checking if number is Armstrong
        if (sum == number)
        {
            printf("%d is an Armstrong number\n", number);
        }
    }

    return 0;
}
