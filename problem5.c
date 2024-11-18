#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the variables");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d\tb=%d",a,b);
    return 0;
}