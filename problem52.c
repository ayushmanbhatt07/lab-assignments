/*
   1
  121
 12321
1234321

*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=3;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(int l=i-1;l>0;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }   
    return 0;
}