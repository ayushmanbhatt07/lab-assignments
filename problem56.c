#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the values");
        scanf("%d", &a[i]);
    }
    int c = 0, b = 0, d = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 0)
            b++;
        else if (a[i] = 0)
            c++;
        else
            d++;
    }
    printf("the number of positive numbers %d", b);
    printf("the number of zeros %d", c);
    printf("the number of negative numbers %d", d);
    return 0;
}
