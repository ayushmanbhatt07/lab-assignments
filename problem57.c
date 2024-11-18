#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the values");
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[j+1])//sorting the array
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("the largest is %d",a[n-1]);
    printf("the second largest is %d",a[n-2]);
    return 0;
}