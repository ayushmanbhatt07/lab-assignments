#include <stdio.h>
int main()
{
    int a[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the values");
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
    
    
    return 0;
}