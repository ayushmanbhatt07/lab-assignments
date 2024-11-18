#include<stdio.h>
int main()
{
    int a[5],b[5],c[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the vlaues in array 1");
        scanf("%d",&a[i]);    
    }
    for(int i=0;i<5;i++)
    {
        printf("enter the vlaues in array 2");
        scanf("%d",&b[i]);    
    }
    for(int i=0;i<5;i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    for(int i=0;i<5;i++)
    {
        printf("array 1 = %d",a[i]);
        printf("array 2 = %d",b[i]);
    }
    return 0;
}