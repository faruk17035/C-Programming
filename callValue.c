#include<stdio.h>
int fun(int x, int y)
{
    x=7;
    y=5;
    printf("Inside fun(Called function):\n");
    printf("X = %d, Y = %d\n",x,y);
    return x,y;
}

void main()
{
    int x=5,y=7;
    fun(x,y);
    printf("Inside Main(Calling Function):\n");
    printf("X = %d, Y = %d\n",x,y);


}
