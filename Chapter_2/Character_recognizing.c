#include<stdio.h>
int main()
{
    char ch;
    int as_val;
    printf("Enter any character: ");
    scanf("%c", &ch);
    as_val=ch;
    if(as_val>=65 && as_val<=90){
        printf("Ascii value=%d", as_val);
        printf("\nThe entered character is Capital letters.");
    }

    else if(as_val>=97 && as_val<=122){
        printf("Ascii value=%d", as_val);
        printf("\nThe entered character is small letters.");
    }
    else if(as_val>=48 && as_val<=57){
        printf("Ascii value=%d", as_val);
        printf("\nThe entered character is numbers.");
    }
    else if((as_val>=0 && as_val<=47) || (as_val>=58&&as_val<=64) ||(as_val>=91 &&as_val<=96)||(as_val>=123&& as_val<=127) ){
        printf("Ascii value=%d", as_val);
        printf("\nThe entered character is special characters");
    }
    else{
        printf("Ascii value=%d", as_val);
        printf("\nThe character is not recognized.");
    }

return 0;
}