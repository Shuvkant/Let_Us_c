/*The is the program to calculate the simple interest of the given sum */ 
/*Date : 2080/01/27 Author: Shuvkant Chaudhary Phanait*/

// #include<stdio.h>
// int main()
// {
//     float prin;       /*Declaring principal as float */
//     float roi, time;           /*Declaring rate of interest and time as float*/
//     prin = 10888.6678;
//     roi = 3.3;
//     time = 5.5;
//     float si;
//     si = (prin * roi * time) / 100;  /*formula for simple interest*/
//     printf("The required simple interest  at the rate %.2lf is %6.2lf",roi,  si);
// }


/*This program calculates the simple interest taking the data from the user*/
/*Date : 2080/01/27 Author: Shuvkant Chaudhary Phanait*/
#include<stdio.h>
int main(){
    float prin, roi, time, si;
    printf("Enter the principal amount:");
    scanf("%f", &prin);
    printf("Enter the rate of interest:");
    scanf("%f",&roi );
    printf("Enter the time :");
    scanf("%f", &time);
    si=(prin*time*roi)/100;
    printf("The principal amount is: Rs%.2f\nRate of interest is: %.2f\nThe time period is: %.2f years", prin, roi, time);
    printf("\nThe required simple interest at the rate %.2f for %.2f years is %.2f", roi, time, si);
}




// /*This is the fun program*/
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter the number:");
//     scanf("%d", &number);
//     printf("You have entered %d", number);
// }

// /*To find the sum of characters in ASCII Code*/
// #include<stdio.h>
// int main()
// {
//     char a, b;
//     int z;
//     a='x';
//     b='y';
//     z=a+b;
//      printf("%d\n%d\n", a, b);
//     printf("The sum is %d", z);
// return 0;
// }


// /*Using exponential function*/
// /*z=a^^b*/
// #include<stdio.h>
// #include<math.h>
// int main(){
// int number, power_to, value;
// printf("Enter the number :");
// scanf(" %d", &number);
// printf("Enter the power:");
// scanf(" %d", &power_to);
// value=pow(number,power_to);
// printf("The value is %d", value);
// }

/*Conversion of data type*/
// #include<stdio.h>
// int main(){
//     /*int a, b, c;
//     float z;
//     a=6;
//     c=3.0;
//     z=a/c;
//     printf("The %d", c);
//     }

// float a, b, c ;
// int s;
// s = a * b * c / 100 + 32 / 4 - 3 * 1.1 ;
// printf("%d", s);
// }



// /*Clearning doubt about conversion of data type*/
// #include<stdio.h>
// int main(){
//     float i ;
//     int  k;
//     float j;
//     i=3.5;
//     j=3.4;
//     k=i+j;
//     printf("%d", k);
// }


// /*Evaluate the hierarcy of the arithmetic operation*/
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float j, k;
//     float m;
//     m=3/2*5;
//     j=2*3/4+4/4+8-2+5/8;
//     k=3 / 2 * 4 + 3 / 8 + 3;

//     printf("j=%f\nk=%f\nm=%f", j,k,m);
// }

// /*A simple program to calculate the gross net salary of the person*/
// #include<stdio.h>
// int main()
// {
//     float salary, dearness_allowance_amount, home_allowance, net_salary;
//     printf("Enter the basic salary:");
//     scanf(" %f", &salary);
//     dearness_allowance_amount=0.4*salary;
//     home_allowance=20*salary;
//     net_salary=salary+dearness_allowance_amount+home_allowance;
//     printf("dearness_allowance_amount =%.2f\nhome_allowance=%.2f\nnet_salary=%f.2", dearness_allowance_amount, home_allowance, net_salary);
// }


// /*Converting km into meter, feet, inch*/
// #include<stdio.h>
// int main()
// {
//     float km, meter, feet, inch, centimeter;
//     printf("Enter the distance in kilometer:");
//     scanf("%f", &km);
//     meter=1000*km;
//     feet=3280.84;
//     inch=km*39370.1;
//     printf("%fkm in meter is %.2f",km, meter);
//     printf("\n%fkm in feet is %.2f", km, feet);
//     printf("\n%fkm in inch is %.2f", km, inch);
// return 0;
// }



// /*Find out the percentage of the marks obtained in five subjects*/
// #include<stdio.h>
// int main(){
//     int m1, m2, m3, m4, m5;
//     float avg;
//     float percent;
//     printf("Enter the marks obtained in five subjects:");
//     scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
//     avg=(m1+m2+m3+m4+m5)/5.0;
//     percent=((m1+m2+m3+m4+m5)/500.00)*100;
//     printf("The average marks is:%.2f", avg);
//     printf("\nThe percentage obtained is %.2f", percent);
// }



// /*Change the fahrenheit temperature into celcius*/
// #include<stdio.h>
// int main(){
//     float fahrenheit, celcius;
//     printf("Enter the temperature in fahrenheit:");
//     scanf("%f", &fahrenheit);
//     celcius=((fahrenheit-32.0)/9)*5;
//     printf("The temperature in fahrenheit scale is %.2f", fahrenheit);
//     printf("\nthe temperature in celcius scale is %.2f", celcius);
// }


// /*To calculate the area and perimeter of rectange*/
// /*Author: Shuvkant Chaudhary Phanait   2080/01/28*/
// #include<stdio.h>
// int main(){
//     float length, breadth, area, perimeter;
//     printf("Enter the length and breadth of the rectangle:");
//     scanf(" %f%f", &length, &breadth);
//     area=length*breadth;
//     perimeter=2*(length+breadth);
//     printf("The area of rectangle = %.2f", area);
//     printf("\nThe perimeter of the rectangle is %.2f", perimeter);
// }



// /*Swapping the numbers*/
// #include<stdio.h>
// int main(){
//     float number_1, number_2, variable;
//     printf("Enter the value of number_1:");
//     scanf("%f", &number_1);
//     printf("Enter the value of number_2:");
//     scanf("%f", &number_2);
//     printf("\n\nBefore Swapping");
//     printf("\nnumber_1=%.2f\nnumber_2=%.2f", number_1, number_2);
//     variable=number_1;
//     number_1=number_2;
//     number_2=variable;
//     printf("\n\nAfter Swapping:");
//     printf("\nnumber_1=%.2f\nnumber_2=%.2f", number_1, number_2);
// }


// /*To find the sum of five digtit number entered by the user:*/
// #include<stdio.h>
// int main(){
//     int number, i, j, sum, remainder, original_num;
//     original_num=number;
//     printf("Enter the five digit number:");
//     scanf("%d", &number);
//      original_num=number;
//      sum=0;
//     for(i=1; i<=5; i++){
//         remainder=number%10;
//         sum+=remainder;
//         number=number/10;
//     }
//     printf("The entered number is:%d", original_num);
//     printf("\nThe sum of digits of number is %d", sum);
// }


// /*To find the number of digits and the sum of digits  of  a entered number*/
// #include<stdio.h>
// int main(){
//     int number, count,remainder, sum, original_number;
//     int i, j;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     original_number=number;
//     count=0;
//     sum=0;
//     do
//     {
//       number=number/10;
//       count=count+1;  /* code */
//     } while (number>=1/* condition */);
//     printf("The number of digits is %d", count);

//     for(i=1; i<=count; i++){
//         remainder=original_number%10;
//         sum=sum+remainder;
//         original_number=original_number/10;
//     }
//     printf("\nThe sum of the digits of number is %d", sum);
// }


