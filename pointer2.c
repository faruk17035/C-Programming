#include<stdio.h>
int main()
{
    int num2=11;
    int *num1=&num2;
    *num1=22;

    printf("Num1 = %d, Num2 = %d\n",num1,num2);
}
/*
num2=11
num1=6402(address of num2)
(value of)num1=22;

/*
Num1=22
Num2=22
*/

