#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the three nos\n");
    scanf("%d%d%d", &a, &b, &c);
    (a > b) ? 
    ((a > c) ? printf("the greatest is a %d", a) : printf("the greatest is c %d")) : 
    ((b > c) ? printf("the greatest is b %d", b) : printf("the greatest is c %d", c));

    return 0;
}