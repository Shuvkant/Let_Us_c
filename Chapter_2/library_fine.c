/*This program displays the fine of the library:*/
#include<stdio.h>
int main(){
    int days;
    double fine;
    printf("Enter the nummber of late days:");
    scanf("%d", &days);
    if(days>=1 && days<=5 ){
            fine=0.5;
    }
    else if(days>=5 && days<=10){
        fine=1;
    }
    else if(days>=10 && days<=29){
        fine=5;
    }
    else{
        printf("Your membership is cancelled.");
        return 0;
    }
    printf("Fine=Rs%.2lf", fine);
    printf("\nNumber of days=%d", days);
    return 0;

}