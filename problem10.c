#include <stdio.h>
int main()
{
    float M, P, C, E, CM;
    printf("enter the marks in mathematics(out of 200),physics(out 0f 200),chemistry(out of 200) and entrance examination(out of 100)\n");
    scanf("%f%f%f%f", &M, &P, &C, &E);      // TAKING INPUT FROM USER
    CM = (M / 2) + (P / 2) + (C / 2) + (E); // CALCULATING CUT OFF MARKS
    printf("cutoff marks are %f", CM);
    return 0;
}