/*
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=(4-i)+1;j>0;j--)

        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        
printf("\n");
    }
    return 0;
}