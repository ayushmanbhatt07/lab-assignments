#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the three nos\n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a > b) && (b > c))//check whether a is greatest
        printf("the greatest is a %d", a);
    else if ((b > c) && (b > c))//check if whether b is greatest
        printf("the greatest is c %d", b);
    else if ((c > a) && (c > b))//check if whether c is greatest
        printf("the greatest is c %d", c);
    else
        printf("value of all three nos is same");//default statement
    return 0;
}