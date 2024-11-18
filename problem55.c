#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the values");
        scanf("%d", &a[i]);
    }
    int c = 0, b = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0) // checking whether no. is even or not
            c++;           // counting no. of even numbers
        else
            b++; // counting odd numbers
    }
    printf("the number of odd numbers are %d", b);
    printf("the number of even numbers are %d", c);
    return 0;
}