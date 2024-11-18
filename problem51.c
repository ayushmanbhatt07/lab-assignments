#include<stdio.h>
int main()
{
    int a=1,b=0;
    for(int i=0;i<5;i++)
    { 
        for(int j=0;j<5;j++)
        {
            if(i==j)
            printf("%d",a);
            else
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}