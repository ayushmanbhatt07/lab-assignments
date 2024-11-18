#include<stdio.h>
int main()
{
    int a[10];
    int n;
    for(int i=0;i<10;i++)
    {
        printf("enter the array");
        scanf("%d",&a[i]);
    }
    printf("enter the number occurence to be counted");
    scanf("%d",&n);
    int c=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]==n)
        c++;
    }
    printf("%d occurs %d times in the given array",n,c);
    return 0;
}