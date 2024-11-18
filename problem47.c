#include<stdio.h>
int main()
{
    for(char c='A';c<='E';c++)
    {
        for(char ch='A';ch<=c;ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}