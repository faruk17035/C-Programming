#include<stdio.h>
int fun(int x, int y)
{
    x=20;
    y=10;
    return x,y;
}
int main()
{
    int x=10,y=20;
    fun(x,y);
    printf("X =%d, y = %d\n",x,y);
}
