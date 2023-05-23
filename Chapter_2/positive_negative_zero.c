#include<stdio.h>
int main()
{   
    int count_positive, count_negative, count_zeros;
    char ch;
    int number;
    count_negative=0;
    count_positive=0;
    count_zeros=0;
    while(ch!='n'){
        printf("Enter the number:");
        scanf("%d", &number);
        if(number>0){
            count_positive++;
        }
        else if(number<0){
            count_negative++;
        }
        else{
            count_zeros++;
        }
        printf("Choose 'y' for yes and 'n' for no: ");
        printf("\nDo you want to continue:");
        scanf(" %c", &ch);
        if(ch=='n'){
            break;
        }


    }
    printf("Positive count=%d\n", count_positive);
    printf("Negative count=%d\n", count_negative);
    printf("Count Zeros=%d\n", count_zeros);
return 0;
}