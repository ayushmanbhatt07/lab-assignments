#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the three nos\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("the largest is a\t%d\n", a);
        else
            printf("the largest is c\t%d\n", c);
    }
    else
    {
        if (b > c)
            printf("the largest is b\t%d\n", b);
        else
            printf("the largest is c\t%d\n", c);
    }
    return 0;
}