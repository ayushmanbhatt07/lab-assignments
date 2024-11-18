#include<stdio.h>
int main()
{
    int n;
    float f=1.0;
    int i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("%f",f);
    return 0;
}