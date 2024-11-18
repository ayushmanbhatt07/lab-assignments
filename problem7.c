#include<stdio.h>
int main()
{
    int b,h;
    float area;
    printf("enter the base and height of triangle");
    scanf("%d%d",&b,&h);
    area=(b*h)/2;
    printf("the area of triangle is %f",area);
    return 0;
}