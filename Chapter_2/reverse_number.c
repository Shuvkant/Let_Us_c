#include<stdio.h>
int main()
{
    int number, original_number, remainder, sum, reverse_number;
    remainder=0;
    sum=0;
    printf("Enter the number:");
    scanf("%d", &number);
    original_number=number;
    do
    {
        remainder=number%10;
        sum=sum*10 +remainder;
        reverse_number=sum;
        number=number/10;

    } while (number>=1);
    printf("The reverse number is %d", reverse_number);
    if (reverse_number==original_number){
        printf("\nEqual");
    }
    else
    printf("\nNot equal");
return 0;
}