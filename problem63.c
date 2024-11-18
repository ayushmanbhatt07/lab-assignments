#include<stdio.h>
int main()
{
    int a[3][3];
    int temp;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter the matrix");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]>a[i+1][j+1])
            {
                temp=a[i][j];
            }
        }
    }
    printf("max value is %d",temp);
    int x;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]<a[i+1][j+1])
            {
                x=a[i][j];
            }
        }
    }
    printf("min value is %d",x);
    return 0;
}