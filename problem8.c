#include<stdio.h>
int main()
{
int a=31558150.0;
int d=a/86400;
int b=a-(d*24*60*60);
int h=b/(60*60);
int c=b-(h*60*60);
int m=c/60;
int s=c-(m*60);
printf("days are %d\thours are %d\tminutes are %d\tseconds are %d",d,h,m,s);
    return 0;
}