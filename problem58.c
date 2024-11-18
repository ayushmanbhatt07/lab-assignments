#include<stdio.h>
int main()
{
    int a[10],b[10],c[10];
    for(int i=0;i<10;i++)
    {
        printf("enter the list of numbers in array 1");
        scanf("%d",&a[i]);
 }
 for(int i=0;i<10;i++)
    {
        printf("enter the list of numbers in array 2");
        scanf("%d",&b[i]);
 }
 for(int i=0;i<10;i++)
 {
    c[i]=a[i]+b[i];
 }
 for(int i=0;i<10;i++)
    {
        printf("%d",c[i]);
        
 }
    return 0;
}