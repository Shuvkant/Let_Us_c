/*To reverse the given number*/
#include<stdio.h>
int main(){
 int number, original_number, remainder, sum, new_number;
    new_number=0;
    printf("Enter the number:");
    scanf("%d", &number);
    original_number=number;
    do
    {
      remainder=number%10;
      new_number=new_number*10+remainder;
      number=number/10;
        /* code */
    } while (number>=1);
    printf("The new number is %d", new_number);
return 0;
}
