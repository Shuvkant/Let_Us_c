/*This program calculates the net amount obtained by the employee*/
#include<stdio.h>
int main(){
    int i , hours, rate, base_hours, overtimepay, basepay, total_pay;
    rate=12;
    base_hours=40;
    for(i=1; i<=10; i++){
        printf("Enter the hours worked by elmloyee %d:", i);
        scanf("%d", &hours);
        if(hours>=base_hours){
            overtimepay=(hours-base_hours)*rate;
            basepay=base_hours*rate;
            total_pay=basepay+overtimepay;
            printf("Total pay is %d\t Overtimepay is %d\n", total_pay, overtimepay);
        }
        else{
            total_pay=hours*rate;
            overtimepay=0;
            printf("Total pay is %d\t Overtimepay is %d\n", total_pay, overtimepay);
        }
    }
}