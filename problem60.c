#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the numbers in array");
        scanf("%d",&a[i]);
    }
    int min,temp;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }

        }
         temp=a[min];
         a[min]=a[i];
         a[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}