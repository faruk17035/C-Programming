#include<stdio.h>
int fun(int *x, int *y)
{
    *x=20;
    *y=10;
    printf("Inside fun(Called function):\n");
    printf("X = %d, Y = %d\n",*x,*y);
}

void main()
{
    int x=10,y=20;
    fun(&x,&y);
    printf("Inside Main(Calling Function):\n");
    printf("X = %d, Y = %d\n",x,y);

}

