#include <stdio.h>
void prime_numbers(int number);
void prime_numbers(int number)
{
    int i;
    int num;
    num = number;
    // for 2
    while (num % 2 == 0)
    {
        printf("%d ", 2);
        num = num / 2;
    }

    for (i = 3; i <= num; i+=2)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num=num/i;
        }
    }
    // if(num>2){
    //     printf(" %d", num);
    // }
}
int main()
{
    int number, i, remainder;
    printf("Ente any number:");
    scanf("%d", &number);
    printf("The prime factors of %d are:", number);
    prime_numbers(number);
}