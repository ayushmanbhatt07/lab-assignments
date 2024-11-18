#include <stdio.h>
int main()
{
    int a;
        printf("enter the no");
    scanf("%d", &a);
    if (a % 2 == 0) // conditon to check given no. is even(divisble by 2)
        printf("the given no is even");
    else
        printf("the given no is odd");

    return 0;
}