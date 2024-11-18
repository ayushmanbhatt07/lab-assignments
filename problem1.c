#include <stdio.h>
int main()
{
    float p, r, t, si;
    printf("enter the principal,rate and time");
    scanf("%f%f%f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("the simple interest is %f\n", si);
    float amt = p + si;
    printf("the final amt is%f\n", amt);

    return 0;
}