#include<stdio.h>
int swap(int a, int b);
int main()
{
    int a,b;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    int d=swap(a,b);
    int e=swap(b,a);
    printf("the new value of a is %d\n",d);
    printf("the new value of b is %d\n",e);
        return 0;
}
int swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    return x;
    return y;
    
}