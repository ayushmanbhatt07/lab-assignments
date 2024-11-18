#include<stdio.h>
int num(int a);
int main()
{
    int a;
printf("enter the number");
scanf("%d",&a);
int d=num(a);
if(d==1)
printf("%d is an even number",a);
else
printf("%d is an odd number",a);

    return 0;
}
int num(int a)
{
    if(a%2==0)
    return 1;
    else
    return 0;
}
