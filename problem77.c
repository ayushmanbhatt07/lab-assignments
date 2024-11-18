#include<stdio.h>
int palindrome(int a);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int d=palindrome(n);
    if(d==1)
    printf("%d is palindrome",n);
    else
    printf("%d is not a palindrome",n);
    return 0;
}
int palindrome(int a)
{
    int m=a,r=0,d;
    while(a!=0)
    {
        d=a%10;
        r=r*10+d;
        a=a/10;
    }
    if(m==r)
    return 1;
    else
    return 0;
}