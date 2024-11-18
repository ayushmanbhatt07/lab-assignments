#include<stdio.h>
int ncr(int,int);
int main()
{
    int n,r;
    printf("enter the value of n");
    
    scanf("%d",&n);
    printf("enter the value of r");
    scanf("%d",&r);
    ncr(n,r);
    return 0;
}
int ncr(int n,int r)
{
    int f,x,y;
    for(int i=1;i<=n;i++)
    {
f=f*i;
    }
for(int i=1;i<=r;i++)
{
    x=x*i;
}
for(int i=1;i<=(n-r);i++)
{
    y=y*i;
}
int fac;
fac=f/(x*y);
printf("the value of NCR is %d ",fac);
}