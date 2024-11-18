#include<stdio.h>
int prime(int n);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
   int d=prime(n);
   if(d==1)
   printf("prime number");
   else
   printf("not a prime number");
    return 0;
}
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}