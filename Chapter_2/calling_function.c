#include <stdio.h>
void calsum(x, y, z);
void calsum(x, y, z)
{
    int x, y, z;
    int d;
    d = x + y + z;
    return (d);
}
int main()
{
    int a, b, c, sum;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    sum = calsum(a, b, c);

    return 0;
}
