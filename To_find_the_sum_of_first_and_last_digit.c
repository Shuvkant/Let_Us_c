/*To find the sum of first and last digit of the number*/
/*Shuvkant Chaudhary Phanait   Date: 2023/05/13*/

#include<stdio.h>
int main(){
  int firstDigit, lastDigit, number, sum, original_number;
  printf("Enter the number:");
  scanf(" %d", &number);
  original_number=number;
  //For the first digit
  firstDigit=number%10;
  while (number>=10)
  {
    number/=10;
    lastDigit=number;
  }
  sum=firstDigit+lastDigit;
  printf("The original numbers was: %d",original_number ); 
  printf("\nThe sum of the first and last digit is %d", sum);
}