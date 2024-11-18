#include <stdio.h>
int main()
{
    float s1, s2, s3, s4, s5;
    printf("enter the marks in 5 subjects\n");
    scanf("%f,%f,%f,%f,%f", &s1, &s2, &s3, &s4, &s5);
    float t;
    printf("enter total marks in each subject\n");
    scanf("%f", &t);
    float p;
    p = ((s1 + s2 + s3 + s4 + s5) / (5 * t)) * 100;
    printf("%f", p);
    return 0;
    
}