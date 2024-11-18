#include<stdio.h>
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        printf("enter the values");
        scanf("%d",&a[i]);
    }
    int find;
    printf("enter the number to be searched");
    scanf("%d",&find);
    int c=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]==find)
        c++;
    }
    if(c>0)
    printf("number found at index %d",c);
    else
    printf("number not found");
    return 0;
}