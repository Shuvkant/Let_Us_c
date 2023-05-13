/*This program allows the cashier to give the currency notes of each denominations:*/
/*2023/05/1*/
#include<stdio.h>
int main(){
    int amount, thousands, five_hundreds, hundreds, fifties, twenties, tens, fives, twos, ones;
    printf("Enter the amount to be withdrawn");
    scanf("%d", &amount);
    thousands=amount/1000;
    amount=amount%1000;

    five_hundreds=amount/500;
    amount=amount%500;

    hundreds=amount/100;
    amount=amount%100;

    fifties=amount/50;
    amount=amount%50;

    twenties=amount/20;
    amount=amount%20;

    tens=amount/10;
    amount=amount%10;

    fives=amount/5;
    amount=amount%5;

    twos=amount/2;
    amount=amount%2;

    ones=amount/1;
    

    printf("1000*%d\n", thousands);
    printf("500*%d\n", five_hundreds);
    printf("100*%d\n", hundreds);
    printf("50*%d\n", fifties);
    printf("20*%d\n", twenties);
    printf("10*%d\n", tens);
    printf("5*%d\n", fives);
    printf("2*%d\n", twos);
    printf("1*%d\n",ones );
}
