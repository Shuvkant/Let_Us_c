#include<stdio.h>
int main()
{
    int number;
    int i;
    int multiple;
    printf("n:");
    scanf("%d",&number);
    for( i=1; i<=10; i++){
        multiple=i*number;
        printf("%d*%d=%d\n", number,i, multiple );
    }
return 0;
}