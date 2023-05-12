/*Using exponential function*/

/*z=a^^b*/
#include<stdio.h>
#include<math.h>
int main(){
int number, power_to, value;
printf("Enter the number :");
scanf(" %d", &number);
printf("Enter the power:");
scanf(" %d", &power_to);
value=pow(number,power_to);
printf("The value is %d", value);
}
