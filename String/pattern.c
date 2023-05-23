#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int min = i < j ? i : j;
            min = min < 2 * n - 1 - i ? min : 2 * n - 1 - i - 1;
            min = min < 2 * n - 1 - j ? min : 2 * n - 1 - j - 1;

            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}
