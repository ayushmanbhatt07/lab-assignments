#include<stdio.h>
#include<math.h>
int armstrong(int n);
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
int d=armstrong(a);
if(d==1)
printf("%d is a armstrong number",a);
else
printf("%d is not a armstrong number",a);
    return 0;
}
int armstrong(int n)
{
    int d,m=n,c=0;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    int x=m;
    int sum=0;
    while(x!=0)
    {
        d=x%10;
        sum+=(pow(d,c));
        
        x=x/10;
    }
    printf("%d\n",sum);
    if(m==sum)
    return 1;
    else
    return 0;
}