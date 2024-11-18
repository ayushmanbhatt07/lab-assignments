#include<stdio.h>
int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter the matrix");
            scanf("%d",&a[i][j]);
        }
    }
    int s1=0,s2=0,s3=0;
    for(int i=0;i<3;i++)
    {
        s1+=a[0][i];
        s2+=a[1][i];
        s3+=a[2][i];

    }
    printf("the sum of first row is %d\nthe sum of second row is %d\nthe sum of third row is",s1,s2,s3);
    return 0;
}