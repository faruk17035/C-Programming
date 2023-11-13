#include<stdio.h>
int main()
{
    int num1=11;
    int num2=num1;
    num1=22;

    printf("Num1 = %d, Num2 = %d\n",num1,num2);
}

/*
Num1=22
Num2=11
*/
