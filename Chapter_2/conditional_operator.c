#include<stdio.h>
int main()
{
 int number, original_number, place_value, digit, new_number, remainder;
 new_number=0;
 digit=0;
 place_value=1;
 printf("Enter the number:");
 scanf("%d",&number);
 original_number=number;
 while (number>0)
 {
     remainder=number%10;
   new_number=(remainder+1)*place_value+new_number;
   place_value*=10;
   number=number/10;
     /* code */
 }
printf("The new_numbe is %d", new_number);
return 0;
}