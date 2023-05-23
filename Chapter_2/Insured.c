/*This shows whether the driver is insured or not */
#include<stdio.h>
int main(){
    char sex, marital_status;
    int age;
    printf("Enter the sex and maritial status of the driver:");
    scanf(" %c %c", &sex, &marital_status);
    printf("Enter the age:");
    scanf("%d", &age);
    if ((marital_status=='M')||(marital_status=='U' && age>25 && sex=='F')|| (marital_status=='U' && sex=='M' && age>30)){
printf("Diver is insured");
    }
    else{
        printf("Driver is not insured");
    }
}