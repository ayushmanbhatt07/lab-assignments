#include <stdio.h>
int main()
{
    float f;
    printf("enter temperature in fahrenheit:\n");
    scanf("%f", &f);
    float c;
    c = (f - 32) * 5 / 9;
    printf("The temperature in celcius is:%f\n", c);

    return 0;
}